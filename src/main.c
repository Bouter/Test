/**
  ******************************************************************************
  * @file    main.c
  * @author  David Bos
  * @version V1A.00
  * @date    03-juli-2017
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
			
char test(int getal);
char feature(int getal);
char test2(int getal);
int main(void)
{
	//int test;
	char res;
	res = test(4);
	res = res + 'r';
	for(;;);
}
char feature(int getal)
{
	if(getal == 5)
	{
		return 'a';
	}
	return 'b';
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
