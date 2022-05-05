#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                (STD_OFF)

 /* Pre-compile option for function Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API                (STD_ON)

/* Number of the configured Port Channels */
#define PORT_CONFIGURED_CHANNLES              (39U)

/* Channel Index in the array of structures in Port_PBcfg.c */
/*****************PORT A***************************/
#define PortConf_A0_CHANNEL_ID_INDEX        (uint8)0x00
#define PortConf_A1_CHANNEL_ID_INDEX         (uint8)0x01
#define PortConf_A2_CHANNEL_ID_INDEX        (uint8)0x02
#define PortConf_A3_CHANNEL_ID_INDEX         (uint8)0x03
#define PortConf_A4_CHANNEL_ID_INDEX        (uint8)0x04
#define PortConf_A5_CHANNEL_ID_INDEX         (uint8)0x05
#define PortConf_A6_CHANNEL_ID_INDEX        (uint8)0x06
#define PortConf_A7_CHANNEL_ID_INDEX         (uint8)0x07
/*****************PORT B***************************/
#define PortConf_B0_CHANNEL_ID_INDEX        (uint8)0x08
#define PortConf_B1_CHANNEL_ID_INDEX         (uint8)0x09
#define PortConf_B2_CHANNEL_ID_INDEX        (uint8)0x0A
#define PortConf_B3_CHANNEL_ID_INDEX         (uint8)0x0B
#define PortConf_B4_CHANNEL_ID_INDEX        (uint8)0x0C
#define PortConf_B5_CHANNEL_ID_INDEX         (uint8)0x0D
#define PortConf_B6_CHANNEL_ID_INDEX        (uint8)0x0E
#define PortConf_B7_CHANNEL_ID_INDEX         (uint8)0x0F
/*****************PORT C***************************/
/*#define PortConf_C0_CHANNEL_ID_INDEX  
#define PortConf_C1_CHANNEL_ID_INDEX      
#define PortConf_C2_CHANNEL_ID_INDEX        
#define PortConf_C3_CHANNEL_ID_INDEX */              /*J-tag PINS**/
#define PortConf_C4_CHANNEL_ID_INDEX        (uint8)0x10
#define PortConf_C5_CHANNEL_ID_INDEX         (uint8)0x11
#define PortConf_C6_CHANNEL_ID_INDEX        (uint8)0x12
#define PortConf_C7_CHANNEL_ID_INDEX         (uint8)0x13
/*****************PORT D***************************/
#define PortConf_D0_CHANNEL_ID_INDEX        (uint8)0x14
#define PortConf_D1_CHANNEL_ID_INDEX         (uint8)0x15
#define PortConf_D2_CHANNEL_ID_INDEX        (uint8)0x16
#define PortConf_D3_CHANNEL_ID_INDEX         (uint8)0x17
#define PortConf_D4_CHANNEL_ID_INDEX        (uint8)0x18
#define PortConf_D5_CHANNEL_ID_INDEX         (uint8)0x19
#define PortConf_D6_CHANNEL_ID_INDEX        (uint8)0x1A
#define PortConf_D7_CHANNEL_ID_INDEX         (uint8)0x1B
/*****************PORT E***************************/
#define PortConf_E0_CHANNEL_ID_INDEX        (uint8)0x1C
#define PortConf_E1_CHANNEL_ID_INDEX         (uint8)0x1D
#define PortConf_E2_CHANNEL_ID_INDEX        (uint8)0x1E
#define PortConf_E3_CHANNEL_ID_INDEX         (uint8)0x1F
#define PortConf_E4_CHANNEL_ID_INDEX        (uint8)0x20
#define PortConf_E5_CHANNEL_ID_INDEX         (uint8)0x21
/*****************PORT F***************************/
#define PortConf_F0_CHANNEL_ID_INDEX        (uint8)0x22
#define PortConf_LED1_CHANNEL_ID_INDEX         (uint8)0x23
#define PortConf_F2_CHANNEL_ID_INDEX        (uint8)0x24
#define PortConf_F3_CHANNEL_ID_INDEX         (uint8)0x25
#define PortConf_SW1_CHANNEL_ID_INDEX        (uint8)0x26



/* Port Configured Port ID's  */
/*****************PORT A***************************/
#define PortConf_A0_PORT_NUM                (Port_PortType)0 /* PORTA */
#define PortConf_A1_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A2_PORT_NUM                (Port_PortType)0 /* PORTA */
#define PortConf_A3_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A4_PORT_NUM                (Port_PortType)0 /* PORTA */
#define PortConf_A5_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A6_PORT_NUM                (Port_PortType)0 /* PORTA */
#define PortConf_A7_PORT_NUM                 (Port_PortType)0 /* PORTA */
/*****************PORT B***************************/
#define PortConf_B0_PORT_NUM                (Port_PortType)1 /* PORTB */
#define PortConf_B1_PORT_NUM                (Port_PortType)1 /* PORTB */
#define PortConf_B2_PORT_NUM                (Port_PortType)1 /* PORTB */
#define PortConf_B3_PORT_NUM                (Port_PortType)1 /* PORTB */
#define PortConf_B4_PORT_NUM                (Port_PortType)1 /* PORTB */
#define PortConf_B5_PORT_NUM                (Port_PortType)1 /* PORTB */
#define PortConf_B6_PORT_NUM                (Port_PortType)1 /* PORTB */
#define PortConf_B7_PORT_NUM                (Port_PortType)1 /* PORTB */
/*****************PORT C***************************/
/*#define PortConf_C0_PORT_NUM                (Port_PortType)2 */  /* PORTC */
/*#define PortConf_C1_PORT_NUM                (Port_PortType)2 */  /* PORTC */
/*#define PortConf_C2_PORT_NUM                (Port_PortType)2 */  /* PORTC */
/*#define PortConf_C3_PORT_NUM                (Port_PortType)2 */  /* PORTC */
#define PortConf_C4_PORT_NUM                (Port_PortType)2   /* PORTC */
#define PortConf_C5_PORT_NUM                (Port_PortType)2   /* PORTC */
#define PortConf_C6_PORT_NUM                (Port_PortType)2   /* PORTC */
#define PortConf_C7_PORT_NUM                (Port_PortType)2   /* PORTC */
/*****************PORT D***************************/
#define PortConf_D0_PORT_NUM                (Port_PortType)3 /* PORTD */
#define PortConf_D1_PORT_NUM                (Port_PortType)3 /* PORTD */
#define PortConf_D2_PORT_NUM                (Port_PortType)3 /* PORTD */
#define PortConf_D3_PORT_NUM                (Port_PortType)3 /* PORTD */
#define PortConf_D4_PORT_NUM                (Port_PortType)3 /* PORTD */
#define PortConf_D5_PORT_NUM                (Port_PortType)3 /* PORTD */
#define PortConf_D6_PORT_NUM                (Port_PortType)3 /* PORTD */
#define PortConf_D7_PORT_NUM                (Port_PortType)3 /* PORTD */
/*****************PORT E***************************/
#define PortConf_E0_PORT_NUM                (Port_PortType)4 /* PORTE */
#define PortConf_E1_PORT_NUM                (Port_PortType)4 /* PORTE */
#define PortConf_E2_PORT_NUM                (Port_PortType)4 /* PORTE */
#define PortConf_E3_PORT_NUM                (Port_PortType)4 /* PORTE */
#define PortConf_E4_PORT_NUM                (Port_PortType)4 /* PORTE */
#define PortConf_E5_PORT_NUM                (Port_PortType)4 /* PORTE */
/*****************PORT F***************************/
#define PortConf_F0_PORT_NUM                (Port_PortType)5 /* PORTF */
#define PortConf_LED1_PORT_NUM                (Port_PortType)5 /* PORTF */
#define PortConf_F2_PORT_NUM                (Port_PortType)5 /* PORTF */
#define PortConf_F3_PORT_NUM                (Port_PortType)5 /* PORTF */
#define PortConf_SW1_PORT_NUM                 (Port_PortType)5 /* PORTF */

/* Port Configured Channel ID's */
/*****************PORT A***************************/
#define PortConf_A0_CHANNEL_NUM             (Port_ChannelType)0 /* Pin 0 in PORTA */
#define PortConf_A1_CHANNEL_NUM             (Port_ChannelType)1 /* Pin 1 in PORTA */
#define PortConf_A2_CHANNEL_NUM             (Port_ChannelType)2 /* Pin 2 in PORTA */
#define PortConf_A3_CHANNEL_NUM             (Port_ChannelType)3 /* Pin 3 in PORTA */
#define PortConf_A4_CHANNEL_NUM             (Port_ChannelType)4 /* Pin 4 in PORTA */
#define PortConf_A5_CHANNEL_NUM             (Port_ChannelType)5 /* Pin 5 in PORTA */
#define PortConf_A6_CHANNEL_NUM             (Port_ChannelType)6 /* Pin 6 in PORTA */
#define PortConf_A7_CHANNEL_NUM             (Port_ChannelType)7 /* Pin 7 in PORTA */
/*****************PORT B***************************/
#define PortConf_B0_CHANNEL_NUM             (Port_ChannelType)0 /* Pin 0 in PORTB */
#define PortConf_B1_CHANNEL_NUM             (Port_ChannelType)1 /* Pin 1 in PORTB */
#define PortConf_B2_CHANNEL_NUM             (Port_ChannelType)2 /* Pin 2 in PORTB */
#define PortConf_B3_CHANNEL_NUM             (Port_ChannelType)3 /* Pin 3 in PORTB */
#define PortConf_B4_CHANNEL_NUM             (Port_ChannelType)4 /* Pin 4 in PORTB */
#define PortConf_B5_CHANNEL_NUM             (Port_ChannelType)5 /* Pin 5 in PORTB */
#define PortConf_B6_CHANNEL_NUM             (Port_ChannelType)6 /* Pin 6 in PORTB */
#define PortConf_B7_CHANNEL_NUM             (Port_ChannelType)7 /* Pin 7 in PORTB */
/*****************PORT C***************************/
/*#define PortConf_C0_CHANNEL_NUM             (Port_ChannelType)0*/ /* Pin 0 in PORTC */
/*#define PortConf_C1_CHANNEL_NUM             (Port_ChannelType)1 *//* Pin 1 in PORTC */             /* J-TAG PINS*/
/*#define PortConf_C2_CHANNEL_NUM             (Port_ChannelType)2 *//* Pin 2 in PORTC */
/*#define PortConf_C3_CHANNEL_NUM             (Port_ChannelType)3 *//* Pin 3 in PORTC */
#define PortConf_C4_CHANNEL_NUM             (Port_ChannelType)4 /* Pin 4 in PORTC */
#define PortConf_C5_CHANNEL_NUM             (Port_ChannelType)5 /* Pin 5 in PORTC */
#define PortConf_C6_CHANNEL_NUM             (Port_ChannelType)6 /* Pin 6 in PORTC */
#define PortConf_C7_CHANNEL_NUM             (Port_ChannelType)7 /* Pin 7 in PORTC */
/*****************PORT D***************************/
#define PortConf_D0_CHANNEL_NUM             (Port_ChannelType)0 /* Pin 0 in PORTD */
#define PortConf_D1_CHANNEL_NUM             (Port_ChannelType)1 /* Pin 1 in PORTD */
#define PortConf_D2_CHANNEL_NUM             (Port_ChannelType)2 /* Pin 2 in PORTD */
#define PortConf_D3_CHANNEL_NUM             (Port_ChannelType)3 /* Pin 3 in PORTD */
#define PortConf_D4_CHANNEL_NUM             (Port_ChannelType)4 /* Pin 4 in PORTD */
#define PortConf_D5_CHANNEL_NUM             (Port_ChannelType)5 /* Pin 5 in PORTD */
#define PortConf_D6_CHANNEL_NUM             (Port_ChannelType)6 /* Pin 6 in PORTD */
#define PortConf_D7_CHANNEL_NUM             (Port_ChannelType)7 /* Pin 7 in PORTD */
/*****************PORT E***************************/
#define PortConf_E0_CHANNEL_NUM             (Port_ChannelType)0 /* Pin 0 in PORTE */
#define PortConf_E1_CHANNEL_NUM             (Port_ChannelType)1 /* Pin 1 in PORTE */
#define PortConf_E2_CHANNEL_NUM             (Port_ChannelType)2 /* Pin 2 in PORTE */
#define PortConf_E3_CHANNEL_NUM             (Port_ChannelType)3 /* Pin 3 in PORTE */
#define PortConf_E4_CHANNEL_NUM             (Port_ChannelType)4 /* Pin 4 in PORTE */
#define PortConf_E5_CHANNEL_NUM             (Port_ChannelType)5 /* Pin 5 in PORTE */
/*****************PORT F***************************/
#define PortConf_F0_CHANNEL_NUM             (Port_ChannelType)0 /* Pin 0 in PORTF */
#define PortConf_LED1_CHANNEL_NUM             (Port_ChannelType)1 /* Pin 1 in PORTF */
#define PortConf_F2_CHANNEL_NUM             (Port_ChannelType)2 /* Pin 2 in PORTF */
#define PortConf_F3_CHANNEL_NUM             (Port_ChannelType)3 /* Pin 3 in PORTF */
#define PortConf_SW1_CHANNEL_NUM              (Port_ChannelType)4 /* Pin 4 in PORTF */

/* Port Configured Mode Changeable Parameter*/






#endif
