/*
 * Copyright© 2021–2022 Beijing OSWare Technology Co., Ltd
 * This file contains confidential and proprietary information of
 * OSWare Technology Co., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IMX8MM_COMMON_H
#define IMX8MM_COMMON_H

#include "audio_platform_if.h"

typedef enum {
    AUDIO_BIT_WIDTH_8   = 0,   /* 8bit width */
    AUDIO_BIT_WIDTH_16  = 1,   /* 16bit width */
    AUDIO_BIT_WIDTH_24  = 2,   /* 24bit width */
    AUDIO_BIT_WIDTH_BUTT,
} AudioBitWidth;

enum {
    AUDIODRV_CTL_ELEM_IFACE_DAC = 0,      /* virtual dac device */
    AUDIODRV_CTL_ELEM_IFACE_ADC = 1,      /* virtual adc device */
    AUDIODRV_CTL_ELEM_IFACE_GAIN = 2,     /* virtual adc device */
    AUDIODRV_CTL_ELEM_IFACE_MIXER = 3,    /* virtual mixer device */
    AUDIODRV_CTL_ELEM_IFACE_ACODEC = 4,   /* Acodec device */
    AUDIODRV_CTL_ELEM_IFACE_PGA = 5,      /* PGA device */
    AUDIODRV_CTL_ELEM_IFACE_AIAO = 6,     /* AIAO device */
};

#endif
