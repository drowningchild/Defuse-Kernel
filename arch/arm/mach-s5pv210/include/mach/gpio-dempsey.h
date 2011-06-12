#ifndef __GPIO_ARIES_H_
#define __GPIO_ARIES_H_

//#include <mach/gpio.h>

#define GPIO_LEVEL_LOW      	0
#define GPIO_LEVEL_HIGH     	1
#define GPIO_LEVEL_NONE     	2
#define GPIO_INPUT				0
#define GPIO_OUTPUT				1

/*GPA*/
#define GPIO_BT_UART_RXD		S5PV210_GPA0(0)
#define GPIO_BT_UART_RXD_AF		2
#define GPIO_BT_RXD 			S5PV210_GPA0(0)
#define GPIO_BT_RXD_AF 			2

#define GPIO_BT_UART_TXD		S5PV210_GPA0(1)
#define GPIO_BT_UART_TXD_AF		2
#define GPIO_BT_TXD 			S5PV210_GPA0(1)
#define GPIO_BT_TXD_AF 			2

#define GPIO_BT_UART_CTS		S5PV210_GPA0(2)
#define GPIO_BT_UART_CTS_AF		2
#define GPIO_BT_CTS 			S5PV210_GPA0(2)
#define GPIO_BT_CTS_AF 			2

#define GPIO_BT_UART_RTS		S5PV210_GPA0(3)
#define GPIO_BT_UART_RTS_AF		2
#define GPIO_BT_RTS 			S5PV210_GPA0(3)
#define GPIO_BT_RTS_AF 			2

#define GPIO_GPS_RXD			S5PV210_GPA0(4)
#define GPIO_GPS_RXD_AF 		2

#define GPIO_GPS_TXD 			S5PV210_GPA0(5)
#define GPIO_GPS_TXD_AF 		2

#define GPIO_GPS_CTS			S5PV210_GPA0(6)
#define GPIO_GPS_CTS_AF 		2

#define GPIO_GPS_RTS			S5PV210_GPA0(7)
#define GPIO_GPS_RTS_AF 		2

#define GPIO_AP_RXD				S5PV210_GPA1(0)
#define GPIO_AP_RXD_AF			2

#define GPIO_AP_TXD				S5PV210_GPA1(1)
#define GPIO_AP_TXD_AF			2

#define GPIO_AP_FLM_RXD			S5PV210_GPA1(2)
#define GPIO_AP_FLM_RXD_AF		2
#define GPIO_FLM_RXD 			S5PV210_GPA1(2)
#define GPIO_FLM_RXD_AF 		2

#define GPIO_AP_FLM_TXD			S5PV210_GPA1(3)
#define GPIO_AP_FLM_TXD_AF		2
#define GPIO_FLM_TXD 			S5PV210_GPA1(3)
#define GPIO_FLM_TXD_AF 		2

/*GPB*/
#define GPIO_GPB0			S5PV210_GPB(0)

#define GPIO_WLAN_BT_EN		S5PV210_GPB(1)

#define GPIO_GPB2			S5PV210_GPB(2)

#define GPIO_GPB3			S5PV210_GPB(3)

#define GPIO_BOOT_MODE			S5PV210_GPB(4)

#define GPIO_BT_EN			S5PV210_GPB(5)

#define GPIO_BT_nRST			S5PV210_GPB(6)
#define GPIO_BT_RST			S5PV210_GPB(6)

//#define GPIO_TOUCH_RST			S5PV210_GPB(6)
//#define GPIO_TOUCH_ST_AF		1

#define GPIO_GPB7				S5PV210_GPB(7)
//NAGSM_Android_HQ_Camera_SungkooLee_20101022
#define GPIO_CAM_IO_EN				S5PV210_GPB(7)
//NAGSM_Android_HQ_Camera_SungkooLee_20101022

/*GPC*/
#define GPIO_REC_PCM_CLK		S5PV210_GPC0(0)
#define GPIO_REC_PCM_CLK_AF		3

#define GPIO_GPC01				S5PV210_GPC0(1)

#define GPIO_REC_PCM_SYNC		S5PV210_GPC0(2)
#define GPIO_REC_PCM_SYNC_AF	3

#define GPIO_REC_PCM_IN			S5PV210_GPC0(3)
#define GPIO_REC_PCM_IN_AF		3

#define GPIO_REC_PCM_OUT		S5PV210_GPC0(4)
#define GPIO_REC_PCM_OUT_AF		3

#define GPIO_DISPLAY_SI			S5PV210_GPC1(0)
#define GPIO_DISPLAY_SI_AF		S3C_GPIO_SFN(1)

#define GPIO_GPC11				S5PV210_GPC1(1)
//NAGSM_Android_HQ_Camera_SungkooLee_20101022
#define CAM_CORE_EN				S5PV210_GPC1(1)
//NAGSM_Android_HQ_Camera_SungkooLee_20101022

#define GPIO_GPC12				S5PV210_GPC1(2)
#define GPIO_A1026_RST				S5PV210_GPC1(2)

#define GPIO_DISPLAY_CLK			S5PV210_GPC1(3)
#define GPIO_DISPLAY_CLK_AF		S3C_GPIO_SFN(1)

#define GPIO_GPC14				S5PV210_GPC1(4)
#define GPIO_A1026_WAKEUP				S5PV210_GPC1(4)

/*GPD*/
#define GPIO_GPD00				S5PV210_GPD0(0)

#define GPIO_VIBTONE_PWM		S5PV210_GPD0(1)

#define GPIO_VIBTONE_PWM1		S5PV210_GPD0(2)

#define GPIO_GPD03				S5PV210_GPD0(3)

#define GPIO_CAM_SDA_29V		S5PV210_GPD1(0)
#define GPIO_CAM_SDA_29V_AF		2

#define GPIO_CAM_SCL_29V		S5PV210_GPD1(1)
#define GPIO_CAM_SCL_29V_AF		2

//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119
//#define GPIO_FM_SDA_28V			S5PV210_GPD1(2)
//#define GPIO_FM_SDA_28V_AF		2
#define GPIO_FM_SDA_28V			0
#define GPIO_FM_SDA_28V_AF		0

#define GPIO_AP_HDMI_SDA			S5PV210_GPD1(2)		
#define GPIO_AP_HDMI_SDA_AF		2

//#define GPIO_FM_SCL_28V			S5PV210_GPD1(3)
//#define GPIO_FM_SCL_28V_AF		2
#define GPIO_FM_SCL_28V			0
#define GPIO_FM_SCL_28V_AF		0

#define GPIO_AP_HDMI_SCL			S5PV210_GPD1(3)
#define GPIO_AP_HDMI_SCL_AF		2
//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119

#define GPIO_TSP_SDA_28V		S5PV210_GPD1(4)
#define GPIO_TSP_SDA_28V_AF		2	

#define GPIO_TSP_SCL_28V		S5PV210_GPD1(5)
#define GPIO_TSP_SCL_28V_AF		2


/*GPE*/
#define GPIO_CAM_PCLK			S5PV210_GPE0(0)
#define GPIO_CAM_PCLK_AF		2

#define GPIO_CAM_VSYNC			S5PV210_GPE0(1)
#define GPIO_CAM_VSYNC_AF		2

#define GPIO_CAM_HSYNC			S5PV210_GPE0(2)
#define GPIO_CAM_HSYNC_AF		2

#define GPIO_CAM_D0				S5PV210_GPE0(3)
#define GPIO_CAM_D0_AF			2

#define GPIO_CAM_D1				S5PV210_GPE0(4)
#define GPIO_CAM_D1_AF			2

#define GPIO_CAM_D2				S5PV210_GPE0(5)
#define GPIO_CAM_D2_AF			2

#define GPIO_CAM_D3				S5PV210_GPE0(6)
#define GPIO_CAM_D3_AF			2

#define GPIO_CAM_D4				S5PV210_GPE0(7)
#define GPIO_CAM_D4_AF			2

#define GPIO_CAM_D5				S5PV210_GPE1(0)
#define GPIO_CAM_D5_AF			2

#define GPIO_CAM_D6				S5PV210_GPE1(1)
#define GPIO_CAM_D6_AF			2

#define GPIO_CAM_D7				S5PV210_GPE1(2)
#define GPIO_CAM_D7_AF			2

#define GPIO_CAM_MCLK			S5PV210_GPE1(3)
#define GPIO_CAM_MCLK_AF		2

#define GPIO_GPE14				S5PV210_GPE1(4)


/*GPF*/
#define GPIO_DISPLAY_HSYNC		S5PV210_GPF0(0)
#define GPIO_DISPLAY_HSYNC_AF	S3C_GPIO_SFN(2)

#define GPIO_DISPLAY_VSYNC		S5PV210_GPF0(1)
#define GPIO_DISPLAY_VSYNC_AF	S3C_GPIO_SFN(2)

#define GPIO_DISPLAY_DE			S5PV210_GPF0(2)
#define GPIO_DISPLAY_DE_AF		S3C_GPIO_SFN(2)

#define GPIO_DISPLAY_PCLK		S5PV210_GPF0(3)
#define GPIO_DISPLAY_PCLK_AF	S3C_GPIO_SFN(2)

#define GPIO_LCD_D0				S5PV210_GPF0(4)
#define GPIO_LCD_D0_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D1				S5PV210_GPF0(5)
#define GPIO_LCD_D1_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D2				S5PV210_GPF0(6)
#define GPIO_LCD_D2_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D3				S5PV210_GPF0(7)
#define GPIO_LCD_D3_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D4				S5PV210_GPF1(0)
#define GPIO_LCD_D4_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D5				S5PV210_GPF1(1)
#define GPIO_LCD_D5_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D6				S5PV210_GPF1(2)
#define GPIO_LCD_D6_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D7				S5PV210_GPF1(3)
#define GPIO_LCD_D7_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D8				S5PV210_GPF1(4)
#define GPIO_LCD_D8_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D9				S5PV210_GPF1(5)
#define GPIO_LCD_D9_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D10			S5PV210_GPF1(6)
#define GPIO_LCD_D10_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D11			S5PV210_GPF1(7)
#define GPIO_LCD_D11_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D12			S5PV210_GPF2(0)
#define GPIO_LCD_D12_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D13			S5PV210_GPF2(1)
#define GPIO_LCD_D13_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D14			S5PV210_GPF2(2)
#define GPIO_LCD_D14_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D15			S5PV210_GPF2(3)
#define GPIO_LCD_D15_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D16			S5PV210_GPF2(4)
#define GPIO_LCD_D16_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D17			S5PV210_GPF2(5)
#define GPIO_LCD_D17_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D18			S5PV210_GPF2(6)
#define GPIO_LCD_D18_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D19			S5PV210_GPF2(7)
#define GPIO_LCD_D19_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D20			S5PV210_GPF3(0)
#define GPIO_LCD_D20_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D21			S5PV210_GPF3(1)
#define GPIO_LCD_D21_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D22			S5PV210_GPF3(2)
#define GPIO_LCD_D22_AF			S3C_GPIO_SFN(2)

#define GPIO_LCD_D23			S5PV210_GPF3(3)
#define GPIO_LCD_D23_AF			S3C_GPIO_SFN(2)

#define GPIO_CODEC_LDO_EN		S5PV210_GPF3(4)

#define GPIO_GPF35				S5PV210_GPF3(5)
#define GPIO_PDA_ACTIVE_HW_01		S5PV210_GPF3(5)
#define GPIO_PDA_ACTIVE			S5PV210_GPF3(5)


/*GPG*/
#define GPIO_NAND_CLK			S5PV210_GPG0(0)
#define GPIO_NAND_CLK_AF		2

#define GPIO_NAND_CMD			S5PV210_GPG0(1)
#define GPIO_NAND_CMD_AF		2

#define GPIO_GPG02			S5PV210_GPG0(2)

#define GPIO_NAND_D0			S5PV210_GPG0(3)
#define GPIO_NAND_D0_AF			2

#define GPIO_NAND_D1			S5PV210_GPG0(4)
#define GPIO_NAND_D1_AF			2

#define GPIO_NAND_D2			S5PV210_GPG0(5)
#define GPIO_NAND_D2_AF			2

#define GPIO_NAND_D3			S5PV210_GPG0(6)
#define GPIO_NAND_D3_AF			2

#define GPIO_GPS_nRST			S5PV210_GPG1(0)

#define GPIO_GPS_PWR_EN			S5PV210_GPG1(1)

#define GPIO_NAND_D4			S5PV210_GPG1(3)
#define GPIO_NAND_D4_AF			2

#define GPIO_NAND_D5			S5PV210_GPG1(4)
#define GPIO_NAND_D5_AF			2

#define GPIO_NAND_D6			S5PV210_GPG1(5)
#define GPIO_NAND_D6_AF			2

#define GPIO_NAND_D7			S5PV210_GPG1(6)
#define GPIO_NAND_D7_AF			2

#define GPIO_T_FLASH_CLK		S5PV210_GPG2(0)
#define GPIO_T_FLASH_CLK_AF		2

#define GPIO_T_FLASH_CMD        S5PV210_GPG2(1)
#define GPIO_T_FLASH_CMD_AF		2

//#define GPIO_ALS_SDA_28V		S5PV210_GPG2(2)
#define GPIO_GPG22			S5PV210_GPG2(2)

#define GPIO_T_FLASH_D0         S5PV210_GPG2(3)
#define GPIO_T_FLASH_D0_AF		2

#define GPIO_T_FLASH_D1         S5PV210_GPG2(4)
#define GPIO_T_FLASH_D1_AF		2	

#define GPIO_T_FLASH_D2         S5PV210_GPG2(5)
#define GPIO_T_FLASH_D2_AF		2

#define GPIO_T_FLASH_D3         S5PV210_GPG2(6)
#define GPIO_T_FLASH_D3_AF		2

#define GPIO_WLAN_SDIO_CLK      S5PV210_GPG3(0)
#define GPIO_WLAN_SDIO_CLK_AF   2

#define GPIO_WLAN_SDIO_CMD      S5PV210_GPG3(1)
#define GPIO_WLAN_SDIO_CMD_AF   2

#define GPIO_WLAN_nRST          S5PV210_GPG3(2)
#define GPIO_WLAN_nRST_AF	1
#define GPIO_WLAN_RST			S5PV210_GPG3(2)

#define GPIO_WLAN_SDIO_D0       S5PV210_GPG3(3)
#define GPIO_WLAN_SDIO_D0_AF    2

#define GPIO_WLAN_SDIO_D1       S5PV210_GPG3(4)
#define GPIO_WLAN_SDIO_D1_AF    2

#define GPIO_WLAN_SDIO_D2       S5PV210_GPG3(5)
#define GPIO_WLAN_SDIO_D2_AF    2

#define GPIO_WLAN_SDIO_D3       S5PV210_GPG3(6)
#define GPIO_WLAN_SDIO_D3_AF    2


/*GPH*/
#define GPIO_AP_PS_HOLD			S5PV210_GPH0(0)

#define GPIO_ACC_INT			S5PV210_GPH0(1)

#define GPIO_PS_ALS_INT			S5PV210_GPH0(2)
#define GPIO_PS_ALS_INT_AF		0xF

#define GPIO_BUCK_1_EN_A		S5PV210_GPH0(3)

#define GPIO_BUCK_1_EN_B		S5PV210_GPH0(4)

#define GPIO_BUCK_2_EN			S5PV210_GPH0(5)

#define GPIO_DET_35				S5PV210_GPH0(6)
#define GPIO_DET_35_AF			0xFF

#define GPIO_AP_PMIC_IRQ		S5PV210_GPH0(7)
#define GPIO_AP_PMIC_IRQ_AF		0xFF

#define GPIO_RESET2_N			S5PV210_GPH1(0)

#define GPIO_CP_PWR_RST			S5PV210_GPH1(1)

#define GPIO_ISP_INT			S5PV210_GPH1(2)	

#define GPIO_nINT_ONEDRAM_AP		S5PV210_GPH1(3)
#define GPIO_nINT_ONEDRAM_AP_AF	0xF

#if defined (CONFIG_CP_CHIPSET_STE)
#define GPIO_INT_RESOUT				S5PV210_GPH1(4)
#else
#define GPIO_SIDE_RESET			S5PV210_GPH1(4)
#endif

//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119
//#define GPIO_SIDE_WAKE			S5PV210_GPH1(5)
#define GPIO_SIDE_WAKE			0

#define GPIO_MHL_INT			S5PV210_GPH1(5)
#define GPIO_MHL_INT_AF			0xF

//#define GPIO_GPH16				S5PV210_GPH1(6)
//#define GPIO_CP_PMU_RST			S5PV210_GPH1(6)

#define GPIO_GPH16			0
#define GPIO_CP_PMU_RST			0

#define GPIO_MHL_WAKE_UP		S5PV210_GPH1(6)
#define GPIO_MHL_WAKE_UP_AF		0XF

//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119

#define GPIO_PHONE_ACTIVE		S5PV210_GPH1(7)

#define GPIO_KBC0				S5PV210_GPH2(0)
#define GPIO_KBC0_AF			3


//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119
#define GPIO_HDMI_HPD			S5PV210_GPH2(1)
#define GPIO_HDMI_HPD_AF		0xF
//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119


#define GPIO_KBC1				S5PV210_GPH3(0)
#define GPIO_KBC1_AF			3

#define GPIO_KBC2				S5PV210_GPH3(1)
#define GPIO_KBC2_AF			3

//[ hdlnc_bp_ytkwon : 20100310
#define GPIO_EAR_SEND_END35		S5PV210_GPH2(2)
#define GPIO_EAR_SEND_END35_AF	0xFF
//] hdlnc_bp_ytkwon : 20100310

#define GPIO_GPH23				S5PV210_GPH2(3)

#define GPIO_WLAN_HOST_WAKE		S5PV210_GPH2(4)
#define GPIO_WLAN_HOST_WAKE_AF		0xF

#define GPIO_BT_HOST_WAKE			S5PV210_GPH2(5)
#define GPIO_BT_HOST_WAKE_AF		0xF

#define GPIO_nPOWER				S5PV210_GPH2(6)
#define GPIO_N_POWER			S5PV210_GPH2(6)
#define GPIO_N_POWER_AF			2

#define GPIO_JACK_nINT			S5PV210_GPH2(7)
#define GPIO_JACK_nINT_AF			0xF
#define GPIO_JACK_INT_N 		S5PV210_GPH2(7)
#define GPIO_JACK_INT_N_AF		0xFF


#define GPIO_KBR0				S5PV210_GPH3(0)
#define GPIO_KBR0_AF			3

#define GPIO_KBR1				S5PV210_GPH3(1)
#define GPIO_KBR1_AF			3

#define GPIO_KBR2				S5PV210_GPH3(2)
#define GPIO_KBR2_AF			3

#define GPIO_KBR3				S5PV210_GPH3(3)
#define GPIO_KBR3_AF			3

#define GPIO_T_FLASH_DETECT		S5PV210_GPH3(4)

#define GPIO_MSENSE_IRQ			S5PV210_GPH3(5)

#define GPIO_EAR_SEND_END		S5PV210_GPH3(6)
#define GPIO_EAR_SEND_END_AF	0xFF
#if 1 // (defined CONFIG_S5PC110_DEMPSEY _BOARD) 
#define GPIO_CP_RST 			S5PV210_GPH1(0)		
#else
#define GPIO_CP_RST 			S5PV210_GPH3(7)		
#endif

#define GPIO_MSENSOR_INT		S5PV210_GPH3(7)


/*GPI*/
#define GPIO_CODEC_I2S_CLK		S5PV210_GPI(0)
#define GPIO_CODEC_I2S_CLK_AF		2

#define GPIO_GPI1				S5PV210_GPI(1)

#define GPIO_CODEC_I2S_WS		S5PV210_GPI(2)
#define GPIO_CODEC_I2S_WS_AF		2

#define GPIO_CODEC_I3S_DI		S5PV210_GPI(3)
#define GPIO_CODEC_I3S_DI_AF		2

#define GPIO_CODEC_I3S_DO		S5PV210_GPI(4)
#define GPIO_CODEC_I3S_DO_AF		2

#define GPIO_GPI5				S5PV210_GPI(5)

#define GPIO_GPI6				S5PV210_GPI(6)


/*GPJ*/
#define GPIO_SENSE_SCL_28V				S5PV210_GPJ0(0)
#define GPIO_SENSE_SDA_28V				S5PV210_GPJ0(1)

#define GPIO_HWREV_MODE0		S5PV210_GPJ0(2)

#define GPIO_HWREV_MODE1		S5PV210_GPJ0(3)

#define GPIO_HWREV_MODE2		S5PV210_GPJ0(4)

#define GPIO_TOUCH_INT			S5PV210_GPJ0(5)
#define GPIO_TOUCH_INT_AF		0xFF

#define GPIO_CAM_MEGA_EN		S5PV210_GPJ0(6)

#define GPIO_HWREV_MODE3		S5PV210_GPJ0(7)

#define GPIO_PHONE_ON			S5PV210_GPJ1(0)
#define GPIO_SIDE_USB_SW		S5PV210_GPJ1(0)

#define GPIO_VIBTONE_EN1		S5PV210_GPJ1(1)

//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119
//#define GPIO_GPJ30			S5PV210_GPJ1(2)
//#define GPIO_SIDE_EN			S5PV210_GPJ1(2)
#define GPIO_GPJ30			0
#define GPIO_SIDE_EN			0

#define GPIO_HDMI_EN1			S5PV210_GPJ1(2) 
//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119

//NAGSM_Android_SEL_Kernel_Aakash_20101018
#define CAM_LDO_SDA			S5PV210_GPJ1(3)
//#define GPIO_TOUCH_EN			S5PV210_GPJ1(3)
//#define	GPIO_TOUCH_EN_AF		1
#define GPIO_TOUCH_EN                   0
#define GPIO_TOUCH_EN_AF                0
//NAGSM_Android_SEL_Kernel_Aakash_20101018


//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119
//#define GPIO_PS_ON			S5PV210_GPJ1(4)
#define GPIO_PS_ON			0

#define GPIO_MHL_SEL			S5PV210_GPJ1(4)
//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119


//NAGSM_Android_SEL_Kernel_Aakash_20101005
#define GPIO_CAM_MEGA_nRST		0
//#define GPIO_CAM_MEGA_nRST		S5PV210_GPJ1(5)
//NAGSM_Android_SEL_Kernel_Aakash_20101005

#define GPIO_MASSMEMORY_EN2		S5PV210_GPJ1(5)

//#define GPIO_CAM_FLASH_EN		S5PV210_GPJ2(0)
#define GPIO_TA_CURRENT_SEL_AP	S5PV210_GPJ2(0)

//#define GPIO_CAM_FLASH_SET		S5PV210_GPJ2(1)
#define GPIO_BT_WAKE			S5PV210_GPJ2(1)

#define GPIO_OLED_DET			S5PV210_GPJ2(2)

//#define GPIO_CODEC_XTAL_EN		S5PV210_GPJ2(3)

//NAGSM_Android_SEL_Kernel_Aakash_20101018
#define CAM_LDO_SCL			S5PV210_GPJ2(3)
//#define GPIO_WLAN_WAKE		S5PV210_GPJ2(3)
//#define GPIO_WLAN_WAKE_AF		1
#define GPIO_WLAN_WAKE          	0
#define GPIO_WLAN_WAKE_AF               0
//NAGSM_Android_SEL_Kernel_Aakash_20101018



#define SUBPM_SDA_28V				S5PV210_GPJ2(4)
#define SUBPM_SCL_28V				S5PV210_GPJ2(5)

//NAGSM_Android_SEL_Kernel_Aakash_20101005
#define GPIO_FM_INT				0
#define GPIO_FM_RST				0

//#define GPIO_FM_INT				S5PV210_GPJ2(4)
//#define GPIO_FM_RST				S5PV210_GPJ2(5)
//NAGSM_Android_SEL_Kernel_Aakash_20101005

#define GPIO_EARPATH_SEL		S5PV210_GPJ2(6)

#define GPIO_MASSMEMORY_EN		S5PV210_GPJ2(7)

#define _3_TOUCH_SDA_28V				S5PV210_GPJ3(0)
#define _3_TOUCH_SCL_28V				S5PV210_GPJ3(1)

#if 0
#define _3_GPIO_TOUCH_EN			S5PV210_GPJ3(2)
#define _3_GPIO_TOUCH_EN_AF		1
#define _3_GPIO_TOUCH_CE				S5PV210_GPJ3(3)
#define _3_GPIO_TOUCH_ST_AF		1
#endif 

#define GPIO_PS_ALS_SDA_28V		S5PV210_GPJ3(2)
#define GPIO_PS_ALS_SCL_28V		S5PV210_GPJ3(3)

#define GPIO_USB_SDA_28V		S5PV210_GPJ3(4)

#define GPIO_USB_SCL_28V		S5PV210_GPJ3(5)

//#define GPIO_AP_SDA_28V			S5PV210_GPJ3(6)
//#define GPIO_AP_SCL_28V			S5PV210_GPJ3(7)
#define GPIO_MSENSOR_SDA_28V			S5PV210_GPJ3(6)
#define GPIO_MSENSOR_SCL_28V			S5PV210_GPJ3(7)
#define AP_I2C_SDA_28V			S5PV210_GPJ3(6)
#define AP_I2C_SCL_28V			S5PV210_GPJ3(7)

#define GPIO_AP_PMIC_SDA		S5PV210_GPJ4(0)
#define PMIC_I2C_SDA            	S5PV210_GPJ4(0)
#define PMIC_I2C_SCL            	S5PV210_GPJ4(3)

#define  _3_GPIO_TOUCH_INT		S5PV210_GPJ4(1)
#define _3_GPIO_TOUCH_INT_AF		S3C_GPIO_SFN(0xf)

#define GPIO_MICBIAS_EN			S5PV210_GPJ4(2)

#define GPIO_AP_PMIC_SCL		S5PV210_GPJ4(3)

//#define GPIO_TV_EN				S5PV210_GPJ4(4)

#define GPIO_EARMICBIAS_EN			S5PV210_GPJ4(4) //hdlnc_ysyim_2010-05-03	: from Kepler05(HWRE=0x06)
 
//#define GPIO_MICBIAS_EN2			S5PV210_GPJ2(5) //hdlnc_ysyim_2010-05-04: from SGH-T959 REV0.5(HWREV = 0x0e)	 or 0.6 (HWREV = 0x0f)			

#define GPIO_MP010			S5PV210_MP01(0)


#define GPIO_SUB_DISPLAY_CS		S5PV210_MP01(2)
#define GPIO_ISP_RESET			S5PV210_MP01(2)

#define GPIO_OLED_ID			S5PV210_MP01(3)

#define GPIO_AP_NANDCS			S5PV210_MP01(4)
#define GPIO_AP_NANDCS_AF		5

#define GPIO_DIC_ID				S5PV210_MP01(5)

#define GPIO_MP016				S5PV210_MP01(6)

#define GPIO_MP017				S5PV210_MP01(7)

#define GPIO_CAM_VGA_nSTBY		S5PV210_MP02(0)

#define GPIO_CAM_VGA_nRST		S5PV210_MP02(1)

#define GPIO_VCC_19V_PDA		S5PV210_MP02(2)

#define GPIO_MP023				S5PV210_MP02(3)

#define GPIO_MP030				S5PV210_MP03(0)

#define GPIO_MP031				S5PV210_MP03(1)

#define GPIO_MP032				S5PV210_MP03(2)

//#define GPIO_PDA_ACTIVE			S5PV210_MP03(3)

#define GPIO_VCC_18V_PDA		S5PV210_MP03(4)

//#define GPIO_CP_nRST			S5PV210_MP03(5)
#define GPIO_RESET_REQ_N	S5PV210_MP03(5)

//NAGSM_Android_HQ_Camera_SungkooLee_20101022
#define VT_CAM_SCL_18V			S5PV210_MP03(6)
#define VT_CAM_SDA_18V			S5PV210_MP03(7)
//#define GPIO_MP036				S5PV210_MP03(6)
//#define GPIO_PCM_SEL			S5PV210_MP03(7)
//NAGSM_Android_HQ_Camera_SungkooLee_20101022

#define GPIO_USB_SEL			S5PV210_MP04(0)


#define GPIO_MP042				S5PV210_MP04(2)


//[ hdlnc_bp_ytkwon : 20100301
#define GPIO_A1026_SDA			S5PV210_MP04(4)
#define GPIO_A1026_SDA_AF		2

#define GPIO_A1026_SCL			S5PV210_MP04(3)
#define GPIO_A1026_SCL_AF		2
//] hdlnc_bp_ytkwon : 20100301

#define GPIO_MP044				S5PV210_MP04(4)

//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119
//#define GPIO_LVDS_RST			S5PV210_MP04(5)
#define GPIO_LVDS_RST			0
//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119


#define GPIO_MHL_RST			S5PV210_MP04(5)
//NAGSM_Android_SEL_Kernel_Aakash_20101214
#define GPIO_AP_SDA			S5PV210_MP04(7)	//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119
#define GPIO_AP_SCL			S5PV210_MP04(6)	//MHL v1 //NAGSM_Android_SEL_Kernel_Aakash_20101119
//NAGSM_Android_SEL_Kernel_Aakash_20101214

#define FUEL_SCL_18V		S5PV210_MP05(0)
#define FUEL_SDA_18V	S5PV210_MP05(1)

#define GPIO_AP_SCL_18V			S5PV210_MP05(2)

#define GPIO_AP_SDA_18V			S5PV210_MP05(3)

#define GPIO_DISPLAY_CS			S5PV210_MP05(4)
#define GPIO_DISPLAY_CS_AF		S3C_GPIO_SFN(1)

#define GPIO_MLCD_RST			S5PV210_MP05(5)
#define GPIO_MLCD_RST_AF		S3C_GPIO_SFN(1)

#define GPIO_GPS_CLK_EN			S5PV210_MP05(6)

#define GPIO_UART_SEL			S5PV210_MP05(7)

#define AP_I2C_SDA              S5PV210_MP05(3)
#define AP_I2C_SCL              S5PV210_MP05(2)





#endif
