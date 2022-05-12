#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between port_PBcfg.c and port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between port_PBcfg.c and port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = {
                                             
                                             /*****************************************PORT A************************************************/
                                             PortConf_A0_PORT_NUM,PortConf_A0_CHANNEL_NUM,PortConf_A0_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_A1_PORT_NUM,PortConf_A1_CHANNEL_NUM,PortConf_A1_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_A2_PORT_NUM,PortConf_A2_CHANNEL_NUM,PortConf_A2_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_A3_PORT_NUM,PortConf_A3_CHANNEL_NUM,PortConf_A3_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_A4_PORT_NUM,PortConf_A4_CHANNEL_NUM,PortConf_A4_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_A5_PORT_NUM,PortConf_A5_CHANNEL_NUM,PortConf_A5_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_A6_PORT_NUM,PortConf_A6_CHANNEL_NUM,PortConf_A6_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_A7_PORT_NUM,PortConf_A7_CHANNEL_NUM,PortConf_A7_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_HIGH,GPIO,STD_OFF,STD_OFF,
                                             /*****************************************PORT B************************************************/
                                             PortConf_B0_PORT_NUM,PortConf_B0_CHANNEL_NUM,PortConf_B0_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_B1_PORT_NUM,PortConf_B1_CHANNEL_NUM,PortConf_B1_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_B2_PORT_NUM,PortConf_B2_CHANNEL_NUM,PortConf_B2_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_B3_PORT_NUM,PortConf_B3_CHANNEL_NUM,PortConf_B3_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_B4_PORT_NUM,PortConf_B4_CHANNEL_NUM,PortConf_B4_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_B5_PORT_NUM,PortConf_B5_CHANNEL_NUM,PortConf_B5_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_B6_PORT_NUM,PortConf_B6_CHANNEL_NUM,PortConf_B6_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_B7_PORT_NUM,PortConf_B7_CHANNEL_NUM,PortConf_B7_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             /*****************************************PORT C************************************************/
                                             PortConf_C4_PORT_NUM,PortConf_C4_CHANNEL_NUM,PortConf_C4_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_C5_PORT_NUM,PortConf_C5_CHANNEL_NUM,PortConf_C5_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_C6_PORT_NUM,PortConf_C6_CHANNEL_NUM,PortConf_C6_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_C7_PORT_NUM,PortConf_C7_CHANNEL_NUM,PortConf_C7_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             /*****************************************PORT D************************************************/
                                             PortConf_D0_PORT_NUM,PortConf_D0_CHANNEL_NUM,PortConf_D0_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_D1_PORT_NUM,PortConf_D1_CHANNEL_NUM,PortConf_D1_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_D2_PORT_NUM,PortConf_D2_CHANNEL_NUM,PortConf_D2_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_D3_PORT_NUM,PortConf_D3_CHANNEL_NUM,PortConf_D3_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_D4_PORT_NUM,PortConf_D4_CHANNEL_NUM,PortConf_D4_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_D5_PORT_NUM,PortConf_D5_CHANNEL_NUM,PortConf_D5_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_D6_PORT_NUM,PortConf_D6_CHANNEL_NUM,PortConf_D6_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_D7_PORT_NUM,PortConf_D7_CHANNEL_NUM,PortConf_D7_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             /*****************************************PORT E************************************************/
                                             PortConf_E0_PORT_NUM,PortConf_E0_CHANNEL_NUM,PortConf_E0_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_E1_PORT_NUM,PortConf_E1_CHANNEL_NUM,PortConf_E1_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_E2_PORT_NUM,PortConf_E2_CHANNEL_NUM,PortConf_E2_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_E3_PORT_NUM,PortConf_E3_CHANNEL_NUM,PortConf_E3_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_E4_PORT_NUM,PortConf_E4_CHANNEL_NUM,PortConf_E4_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_E5_PORT_NUM,PortConf_E5_CHANNEL_NUM,PortConf_E5_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             /*****************************************PORT F************************************************/
                                             PortConf_F0_PORT_NUM,PortConf_F0_CHANNEL_NUM,PortConf_F0_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_F2_PORT_NUM,PortConf_F2_CHANNEL_NUM,PortConf_F2_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_F3_PORT_NUM,PortConf_F3_CHANNEL_NUM,PortConf_F3_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
                                             PortConf_LED1_PORT_NUM,PortConf_LED1_CHANNEL_NUM,PortConf_LED1_CHANNEL_ID_INDEX,PORT_PIN_OUT,OFF,STD_LOW,GPIO,STD_OFF,STD_OFF,
				             PortConf_SW1_PORT_NUM,PortConf_SW1_CHANNEL_NUM,PortConf_SW1_CHANNEL_ID_INDEX,PORT_PIN_IN,PULL_UP,STD_OFF,GPIO,STD_OFF,STD_OFF
				         };