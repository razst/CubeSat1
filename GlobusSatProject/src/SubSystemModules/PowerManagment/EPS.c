
#include <satellite-subsystems/IsisSolarPanelv2.h>
#include <hal/errors.h>

#include <string.h>

#include "EPS.h"
#ifdef ISISEPS
	#include <satellite-subsystems/IsisEPS.h>
#endif
#ifdef GOMEPS
	#include <satellite-subsystems/GomEPS.h>
#endif

// y[i] = a * x[i] +(1-a) * y[i-1]
voltage_t prev_avg = 0;		// y[i-1]
float alpha = 0;			//<! smoothing constant

voltage_t eps_threshold_voltages[NUMBER_OF_THRESHOLD_VOLTAGES];	// saves the current EPS logic threshold voltages

int GetBatteryVoltage(voltage_t *vbatt)
{
	return 0;
}

int EPS_Init()
{
	unsigned char I2C_add = EPS_I2C_ADDR;
	int err = IsisEPS_initialize(&I2C_add,1); // TODO address
	if (err != E_NO_SS_ERR && err != E_IS_INITIALIZED){
		return -1;
	}else{
		IsisSolarPanelv2_initialize(slave2_spi); // TODO which slave
		return 0;
	}


}

int EPS_Conditioning()
{
	return 0;
}

int UpdateAlpha(float new_alpha)
{
	return 0;
}

int UpdateThresholdVoltages(voltage_t thresh_volts[NUMBER_OF_THRESHOLD_VOLTAGES])
{
	return 0;
}

int GetThresholdVoltages(voltage_t thresh_volts[NUMBER_OF_THRESHOLD_VOLTAGES])
{
	return 0;
}

int GetAlpha(float *alpha)
{
	return 0;
}

int RestoreDefaultAlpha()
{
	return 0;
}

int RestoreDefaultThresholdVoltages()
{
	return 0;
}

