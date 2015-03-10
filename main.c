#include <stdio.h>

#include <delay.h>

int main(void)
{
	SysTick_Init();
	printf("Started");


    while(1)
    {
    	printf("1sec");
    	delay_nms(1000);

    }
}

void SysTick_Handler(void)
{
	printf("SysTick_Handler");
	TimeTick_Decrement();
}
