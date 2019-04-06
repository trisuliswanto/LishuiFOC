/*
 * FOC.h
 *
 *  Created on: 25.01.2019
 *      Author: stancecoke
 */

#ifndef FOC_H_
#define FOC_H_

#include <arm_math.h>

void FOC_calculation(int16_t int16_i_as, int16_t int16_i_bs, q31_t q31_teta, int16_t int16_i_q_target);

// Maximum Voltage applyed
#define _U_MAX	2030L  //little lower than period of timer1 for proper phase current reading. Could be improved by dynamic timing of AD-conversion
// Square Root of 3
#define _SQRT3	1.73205081
// Pi divided by 3








//globals
extern q31_t temp1;
extern q31_t temp2;
extern q31_t temp3;
extern q31_t temp4;
extern q31_t temp5;
extern q31_t temp6;
extern char PI_flag;

extern q31_t q31_i_q_fil;
extern q31_t q31_i_d_fil;
extern q31_t q31_u_d;
extern q31_t q31_u_q;



#endif /* FOC_H_ */
