
#include "headers/Acc_due_to_gradient.hpp"





void Acc_due_to_gradient::eval()
{

	train_length_compansation();
	step_function local_A_Gradient;
	local_A_Gradient.clear();
	auto it=train_length_compensated_gradients.get_begin_iterator();


	// implemented formulas §3.13.4.3.2
	if(M_rotating_nom_valid)
	{
		for(;it != train_length_compensated_gradients.get_end_iterator();it++){
			local_A_Gradient[it->first]=(g * it->second) / (1000+10*M_rotating_nom);
		}
	}
	else
	{
		for(;it != train_length_compensated_gradients.get_end_iterator();it++){
			if(it->second < 0){
				local_A_Gradient[it->first]=(g * it->second) / (1000+10*M_rotating_min);
			}
			else{
				local_A_Gradient[it->first]=(g * it->second) / (1000+10*M_rotating_max);
			}
		}
	}
	A_Gradient.write(local_A_Gradient);


};


/* implementing §3.13.4.2*/
void Acc_due_to_gradient::train_length_compansation()
{
	train_length_compensated_gradients.clear();
	step_function gradients_local = gradients.read();

	// if there are no gradients, return empty A_Gradient (currently always return 0)
	// TODO relies currently on step_function behavior of empty
	if(gradients_local.step_values.empty()) return;

	// begin at the end of gradient profile to get last profile change
	auto it=gradients_local.get_end_iterator();
	double last_gradient_change=(--it)->first;

	// initialize position variables
	double train_front = gradients_local.get_begin_iterator()->first;
	double train_end = train_front - L_TRAIN;

	//while the end of train have not reached the end of gradient profile
	while(train_end < last_gradient_change)
	{

		it = gradients_local.get_iterator_on_step(train_front);

		//initialize with gradient on train_front position step
		double lowest_gradient=it->second;

		// iterate until train end and search for smaller gradient
		for(;(it!= gradients_local.get_begin_iterator())&&(it->first > train_end);it--)
		{
			if(it->second < lowest_gradient)
			{
				lowest_gradient = it->second;
			}
		}
		// put lowest gradient in compansated gradient profile in train_front position
		train_length_compensated_gradients.step_values[train_front]=lowest_gradient;



		//Move the "virtual" train to nearest change of train front or train end in gradient profile to calculate again smallest gradient

		bool train_front_reached_end=false;

		//calculate distance between train end and next step
		auto it2 = gradients_local.get_iterator_on_step(train_end);
		it2++;

		// is always smaller then end, because this is condition of the outer while loop
		// if (it2 != gradients_local.get_end_iterator())
		double train_end_diff = it2->first - train_end;



		//calculate distance between train front and next step
		double train_front_diff = 0;
		it2 = gradients_local.get_iterator_on_step(train_front);
		it2++;
		// test whether train front reaches the end of gradient profile in next step
		if (it2 != gradients_local.get_end_iterator()) {
			train_front_diff = it2->first - train_front;
		}
		else
		{
			train_front_reached_end=true;
		}


		if(!train_front_reached_end && train_front_diff < train_end_diff)
		{
			//if train_front diff is smaller, then go this step and find next smallest gradient
			train_end +=train_front_diff;
			train_front = (++gradients_local.get_iterator_on_step(train_front))->first;
		}
		else
		{
			train_front += train_end_diff;
			train_end = (++gradients_local.get_iterator_on_step(train_end))->first;
		}


	}
	train_length_compensated_gradients.compress();

};
