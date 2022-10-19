
#ifndef MAIN_H_
#define MAIN_H_

//add some macros
#define ADDR_REG_AHB1ENR  ((RCC_AHBN1ENR_t*) 0x40023830)
#define ADDR_REG_GPIOD_MODE ((GPIOX_MODE_t*)  0x40020C00)
#define ADDR_REG_GPIOD_ODR ((GPIOX_ODR_t*) 0x40020C14)
#define CLOCK_ENABLE 		(1)
#define MODE_CONF_OUTPUT 	(1)
#define PIN_STATE_HIGH 		(1)
#define PIN_STATE_LOW 		(0)
#define DELAY_COUNT 		(300000UL)



//RCC AHB1 peripheral clock enable register (RCC_AHB1ENR)
typedef struct{
	int32_t gpioa_en		:1;
	int32_t gpiob_en		:1;
	int32_t gpioc_en		:1;
	int32_t gpiod_en		:1;
	int32_t gpioe_en		:1;
	int32_t gpiof_en		:1;
	int32_t gpiog_en		:1;
	int32_t gpioh_en		:1;
	int32_t gpioı_en		:1;
	int32_t reserved		:3;
	int32_t crc				:1;
	int32_t reserved2		:3;
	int32_t reserved3		:2;
	int32_t bkp				:1;
	int32_t res				:1;
	int32_t ccm				:1;
	int32_t dma				:1;
	int32_t dma2			:1;
	int32_t reserved4		:2;
	int32_t eth_act			:1;
	int32_t eth_acr			:1;
	int32_t eth_acp			:1;
	int32_t otg_hsen		:1;
	int32_t otg_hsul		:1;
	int32_t reserved5		:1;
}RCC_AHBN1ENR_t;

//GPIO port output data register
typedef struct{
	int32_t pin_0 		:1;
	int32_t pin_1 		:1;
	int32_t pin_2 		:1;
	int32_t pin_3 		:1;
	int32_t pin_4 		:1;
	int32_t pin_5 		:1;
	int32_t pin_6 		:1;
	int32_t pin_7 		:1;
	int32_t pin_8 		:1;
	int32_t pin_9 		:1;
	int32_t pin_10 		:1;
	int32_t pin_11 		:1;
	int32_t pin_12 		:1;
	int32_t pin_13 		:1;
	int32_t pin_14 		:1;
	int32_t pin_15 		:1;
	int32_t reserved 	:16;
}GPIOX_ODR_t;

//GPIO port mode register (GPIOx_MODER)
typedef struct{
		int32_t pin_0 		:2;
		int32_t pin_1 		:2;
		int32_t pin_2 		:2;
		int32_t pin_3 		:2;
		int32_t pin_4 		:2;
		int32_t pin_5 		:2;
		int32_t pin_6 		:2;
		int32_t pin_7 		:2;
		int32_t pin_8 		:2;
		int32_t pin_9 		:2;
		int32_t pin_10 		:2;
		int32_t pin_11 		:2;
		int32_t pin_12 		:2;
		int32_t pin_13 		:2;
		int32_t pin_14 		:2;
		int32_t pin_15 		:2;
}GPIOX_MODE_t;

#endif /* MAIN_H_ */
