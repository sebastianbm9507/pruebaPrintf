#include "holberton.h"
/**
 * fn_decimal - print decimal that enter as parameter
 * @list: va_list argument
 * Return: lenght
 */
int fn_decimal(va_list list)
{
	
	
}
/**
 * fn_integer - print integer 
 * @list: va_list argument
 * Return: lenght 
 */
int fn_integer(va_list list)
{
		/** catch my number */
	int number = va_arg(list, int);
	printf("%i prueba\n", number);

	//rite(1,&number, 10);
}
