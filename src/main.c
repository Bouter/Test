/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
			

int main(void)
{
	int test;
	char res;
	res = test(4);
	for(;;);
}

char test(int getal)
{
	if(getal == 5)
	{
		return 'a';
	}
	return 'b';
}

char test2(int getal)
{
	if(getal == 5)
	{
		return 'a';
	}
	return 'b';
}
