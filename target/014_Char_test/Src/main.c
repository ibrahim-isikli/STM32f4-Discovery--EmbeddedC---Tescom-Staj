

#include <stdint.h>
#include <stdio.h>




int main(void)
{
    char msg1[]="hello how are you?";
    printf("Message is : %s\n",msg1);
    printf("address of Message is : %p\n",&msg1);
    printf("address of Message is : %p\n",msg1);
	for(;;);
}
