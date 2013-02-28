
WHY3:=/usr/local/stow/why3-0.80/bin/why3 -C why3.conf -I .

MLW_FILES= \
	interval.mlw \
	etcs_level.mlw \
	etcs_mode.mlw \
	appendix_a_3_1.mlw \
	section_3_5.mlw \
	section_3_6.mlw \
	section_3_11.mlw \
	section_4_6.mlw \
	section_5_9.mlw \
	section_7_5.mlw \
	section_8_5.mlw \
	section_8_7.mlw

MLW_PROOF= \
	interval.why3-proof

MLW_CHECK=$(MLW_FILES:%.mlw=%.why3-check)

default: why3-check why3-proof

why3-check: $(MLW_CHECK)

why3-proof: $(MLW_PROOF)

## Generic rule
%.why3-check: %.mlw
	$(WHY3) $<

%.why3-proof: %.mlw
	$(WHY3) -P alt-ergo $<
