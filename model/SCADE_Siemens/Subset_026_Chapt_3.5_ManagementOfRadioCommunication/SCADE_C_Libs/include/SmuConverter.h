#ifndef _SMU_CONVERTER_H_FC1B5491_888C_44c0_AA66_7DD0D04DF7AF_
#define _SMU_CONVERTER_H_FC1B5491_888C_44c0_AA66_7DD0D04DF7AF_

#ifdef __cplusplus
extern "C" {
#endif

void* SmxCreateConverter();
int SmxConverterAppend(const char* pszText, void* pConverter);
void SmxResetConverter(void* pConverter);
const char* SmxGetConverterResult(void* pConverter);
void SmxDeleteConverter(void* pConverter);

#ifdef __cplusplus
}
#endif

#endif	// _SMU_CONVERTER_H_FC1B5491_888C_44c0_AA66_7DD0D04DF7AF_

