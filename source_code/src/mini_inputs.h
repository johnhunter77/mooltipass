/* CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at src/license_cddl-1.0.txt
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at src/license_cddl-1.0.txt
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*! \file   mini_inputs.h
 *  \brief  Joystick & wheel functions
 *  Created: 15/2/2016
 *  Copyright [2016] [Mathieu Stephan]
 */
#include "defines.h"

#ifndef JOYSTICK_H_
#define JOYSTICK_H_

/* PROTOTYPES */
RET_TYPE isMiniDirectionPressed(uint8_t direction);
int8_t getWheelCurrentIncrement(void);
void scanMiniInputsDetect(void);
RET_TYPE isWheelClicked(void);
void initMiniInputs(void);

#endif /* JOYSTICK_H_ */