/*   THREAD MODDA  priv -> unprive cevirme	*/

#include <stdint.h>
#include <stdio.h>
/*void RTC_WKUP_IRQHandler(void);
void generate_interrupt();
void change_access_level_unpriv(void);
void HardFault_Handle(void);*/



void generate_interrupt(){ // can access -> must be priv acces level
	// STIR ve ISER= ın adresleri
	uint32_t *pSTIR = (uint32_t*) 0xE000EF00;
	uint32_t *pISER0 = (uint32_t*) 0xE000E100;

	//enable IRQ interrupt
	*pISER0 = (1 << 3);

	// generate an interrupt from software for IRQ3
	*pSTIR = ( 3 & 0x1FF);
}

void change_access_level_unpriv(void){

	//read
	asm volatile("MRS R0, CONTROL");  // reigter R0 <- CONTROL_REG
	//modify
	asm volatile("ORR R0,R0,#0x01");  // R0 <-  (R0 & 0x01)
	//write
	asm volatile("MSR CONTROL,R0");   // CONTROL_REG <- new_R0
	// priv access level -> unpriv access level
}

// thread mode + priv acces
int main(void){
    printf("In thread mode : before interrupt\n");
	change_access_level_unpriv();
    generate_interrupt();
    printf("In thread mode : after interrupt\n");
	for(;;);
}

void RTC_WKUP_IRQHandler(void){
	printf("In handler mode : ISR\n");
}

void HardFault_Handler(void){
	printf("\n***Hard fault detected***\n");
	while(1);
}
