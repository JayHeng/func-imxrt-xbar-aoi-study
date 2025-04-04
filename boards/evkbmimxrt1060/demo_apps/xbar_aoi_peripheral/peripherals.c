/*
 * Copyright 2021-2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v12.0
processor: MIMXRT1062xxxxB
package_id: MIMXRT1062DVL6B
mcu_data: ksdk2_0
processor_version: 0.14.9
board: MIMXRT1060-EVKB
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: 6f92ca47-bfc1-42de-b292-4a782aea22d3
  called_from_default_init: true
  id_prefix: DEMO_
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'uart_cmsis_common'
- type_id: 'uart_cmsis_common_9cb8e302497aa696fdbb5a4fd622c2a8'
- global_USART_CMSIS_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'gpio_adapter_common'
- type_id: 'gpio_adapter_common_57579b9ac814fe26bf95df0a384c36b6'
- global_gpio_adapter_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * AOI initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'AOI'
- type: 'aoi'
- mode: 'AOI'
- custom_name_enabled: 'true'
- type_id: 'aoi_5a2efbfd7a8a5208f8f552077e2b4ded'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'AOI1'
- config_sets:
  - fsl_aoi:
    - events:
      - 0:
        - product_terms:
          - 0:
            - input0: 'IN.0'
            - input1: 'invertedIN.4'
            - input2: 'kAOI_LogicOne'
            - input3: 'kAOI_LogicOne'
          - 1:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicOne'
            - input2: 'kAOI_LogicOne'
            - input3: 'kAOI_LogicOne'
          - 2:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicOne'
            - input2: 'kAOI_LogicOne'
            - input3: 'kAOI_LogicOne'
          - 3:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicOne'
            - input2: 'kAOI_LogicOne'
            - input3: 'kAOI_LogicOne'
        - define: 'true'
        - initialize: 'true'
      - 1:
        - product_terms:
          - 0:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
          - 1:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
          - 2:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
          - 3:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
        - define: 'false'
        - initialize: 'false'
      - 2:
        - product_terms:
          - 0:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
          - 1:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
          - 2:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
          - 3:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
        - define: 'false'
        - initialize: 'false'
      - 3:
        - product_terms:
          - 0:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
          - 1:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
          - 2:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
          - 3:
            - input0: 'kAOI_LogicZero'
            - input1: 'kAOI_LogicZero'
            - input2: 'kAOI_LogicZero'
            - input3: 'kAOI_LogicZero'
        - define: 'false'
        - initialize: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const aoi_event_config_t DEMO_AOI_event_config[1] = {
  {
    .PT0AC = kAOI_InputSignal,
    .PT0BC = kAOI_InvInputSignal,
    .PT0CC = kAOI_LogicOne,
    .PT0DC = kAOI_LogicOne,
    .PT1AC = kAOI_LogicZero,
    .PT1BC = kAOI_LogicOne,
    .PT1CC = kAOI_LogicOne,
    .PT1DC = kAOI_LogicOne,
    .PT2AC = kAOI_LogicZero,
    .PT2BC = kAOI_LogicOne,
    .PT2CC = kAOI_LogicOne,
    .PT2DC = kAOI_LogicOne,
    .PT3AC = kAOI_LogicZero,
    .PT3BC = kAOI_LogicOne,
    .PT3CC = kAOI_LogicOne,
    .PT3DC = kAOI_LogicOne
  }
};

static void DEMO_AOI_init(void) {
  /* Initialize AOI1 peripheral. */
  AOI_Init(DEMO_AOI_PERIPHERAL);
  /* Initialize AOI1 Event 0. */
  AOI_SetEventLogicConfig(DEMO_AOI_PERIPHERAL, kAOI_Event0, &DEMO_AOI_event_config[0]);
}

/***********************************************************************************************************************
 * CMP initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'CMP'
- type: 'cmp'
- mode: 'polling'
- custom_name_enabled: 'true'
- type_id: 'cmp_306724f57b92dbe1771f1514089d2b18'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'CMP1'
- config_sets:
  - fsl_filter:
    - filter_config:
      - filteringOptions: ''
    - quick_selection: 'ContinuousMode'
  - fsl_cmp:
    - main_config:
      - explicitEnableCmp: 'true'
      - hysteresisMode: 'kCMP_HysteresisLevel0'
      - enableHighSpeed: 'false'
      - enableInvertOutput: 'false'
      - useUnfilteredOutput: 'false'
      - enablePinOut: 'false'
    - positiveChannel: 'IN.0'
    - negativeChannel: 'IN.7'
  - fsl_dac:
    - enableDAC: 'true'
    - dac_config:
      - referenceVoltageSource: 'DAC_6bit_VIN2'
      - DACValue: '33'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* DEMO_CMP main configuration */
const cmp_config_t DEMO_CMP_config = {
  .enableCmp = false,
  .hysteresisMode = kCMP_HysteresisLevel0,
  .enableHighSpeed = false,
  .enableInvertOutput = false,
  .useUnfilteredOutput = false,
  .enablePinOut = false,
};
/* Configuration of the DAC sub-module, used in the CMP_SetDACConfig() function */
const cmp_dac_config_t DEMO_CMP_dac_config = {
  .referenceVoltageSource = kCMP_VrefSourceVin2,
  .DACValue = 32U
};

static void DEMO_CMP_init(void) {
  /* Initialize CMP main sub-module functionality */
  CMP_Init(DEMO_CMP_PERIPHERAL, &DEMO_CMP_config);
  /* Set up internal DAC sub-module, that can be used as input 7 of the CMP both inputs. */
  CMP_SetDACConfig(DEMO_CMP_PERIPHERAL, &DEMO_CMP_dac_config);
  /* Initialize CMP main sub-module functionality */
  CMP_SetInputChannels(DEMO_CMP_PERIPHERAL, DEMO_CMP_POSITIVE_INPUT_NUMBER, DEMO_CMP_NEGATIVE_INPUT_NUMBER);
  /* Explicitly enables CMP periphery to satisfy glitch limitations. */
  CMP_Enable(DEMO_CMP_PERIPHERAL, true);
}

/***********************************************************************************************************************
 * PIT initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'PIT'
- type: 'pit'
- mode: 'LPTMR_GENERAL'
- custom_name_enabled: 'true'
- type_id: 'pit_ab54f91356454adb874dafbb69e655fd'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'PIT'
- config_sets:
  - fsl_pit:
    - enableRunInDebug: 'false'
    - enableSharedInterrupt: 'false'
    - sharedInterrupt:
      - IRQn: 'PIT_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - timingConfig:
      - clockSource: 'BusInterfaceClock'
      - clockSourceFreq: 'BOARD_BootClockRUN'
    - channels:
      - 0:
        - channel_id: ''
        - channelNumber: '0'
        - enableChain: 'false'
        - timerPeriod: '500ms'
        - startTimer: 'true'
        - enableInterrupt: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const pit_config_t DEMO_PIT_config = {
  .enableRunInDebug = false
};

static void DEMO_PIT_init(void) {
  /* Initialize the PIT. */
  PIT_Init(DEMO_PIT_PERIPHERAL, &DEMO_PIT_config);
  /* Set channel 0 period to 500 ms (37500000 ticks). */
  PIT_SetTimerPeriod(DEMO_PIT_PERIPHERAL, DEMO_PIT_0, DEMO_PIT_0_TICKS);
  /* Start channel 0. */
  PIT_StartTimer(DEMO_PIT_PERIPHERAL, DEMO_PIT_0);
}

/***********************************************************************************************************************
 * NVIC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'NVIC'
- type: 'nvic'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'nvic_57b5eef3774cc60acaede6f5b8bddc67'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'NVIC'
- config_sets:
  - nvic:
    - interrupt_table: []
    - interrupts: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void DEMO_NVIC_init(void) {
} */

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Initialize components */
  DEMO_AOI_init();
  DEMO_CMP_init();
  DEMO_PIT_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
