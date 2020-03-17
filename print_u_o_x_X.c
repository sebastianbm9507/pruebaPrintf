#include "holberton.h"
/**
 * fn_octal - convert decimal to octal
 * @num: va_list argument
 * Return: numbers printed char
 *
 */
int fn_octal(va_list num)
{
	unsigned int n = va_arg(num, int);
	  /** array to store octal number */
	int j, i,  octalNum[100];
    /** counter for octal number array */

	i = 0;
	while (n != 0)
	{
		/** storing remainder in octal array */
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}
	/** printing octal number array in reverse order */
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octalNum[j] + '0');
	}
	/** count the chars printed */
	return (i);
}
/**
 * fn_un - print numbers
 * @args: list of parameters
 * Return: number of numbers printed
 */
int fn_un(va_list args)
{
	unsigned int x, rtn;

	x = va_arg(args, int);

	if (x == 0)
	{
		_putchar(0);
		return (1);
	}
	else
	{
		print_num_un(x);
		rtn = take_num_un(x);
		return (rtn);
	}
}
/**
 * take_num_un - determine number characters printed
 * @number: number given as parameter
 * Return: number of characters printed
 */
int take_num_un(unsigned int number)
{
	if (number / 10)
	{
		return (1 + take_num_un(number / 10));
	}
	else
		return (1);
}
/**
 * print_num_un - print the number given as parameter
 * @number: number given as parameter
 * Return: void
 */
void print_num_un(unsigned int number)
{
	if (number / 10)
	{
		print_num_un(number / 10);
		_putchar((number % 10) + '0');
	}
	else
	{
		_putchar((number % 10) + '0');
	}
}
