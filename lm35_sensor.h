/***********************************************************************/
/***********    Author     : Tarek Elmenshawy       		************/
/***********    File Name  : lm35_sensor.h			     	************/
/***********	Version	   : V0.1							************/
/***********    Date       : 18-05-2022             		************/
/***********    Description: LM35 sensor driver header file ************/
/***********************************************************************/

/***********************************************************************/
/***********	Guard of file will call one time in .c file    *********/
/***********************************************************************/

#ifndef LM35_SENSOR_H
#define LM35_SENSOR_H

#include "std_types.h"

/***********************************************************************/
/***********				Constants Definitions			  **********/
/***********************************************************************/

#define LM35_CHANNEL_ID			2
#define LM35_MAX_VOLT_VALUE		1.5
#define LM35_MAX_TEMP			150

/***********************************************************************/
/***********				Functions Prototypes			  **********/
/***********************************************************************/

uint8 LM35_getTemperature(void);


#endif	/* LM35_SENSOR_H */
