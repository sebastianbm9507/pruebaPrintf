#include "holberton.h"
/**
 * take_num - determine number characters printed
 * @number: number given as parameter
 * Return: number of characters printed
 */
int take_num(int number)
{
	if (number / 10)
	{
		return (1 + take_num(number / 10));
	}
	else
		return (1);
}
/**
 * print_num - print the number given as parameter
 * @number: number given as parameter
 * Return: void
 */
void print_num(int number)
{
	if (number / 10)
	{
		print_num(number / 10);
		_putchar((number % 10) + '0');
	}
	else
	{
		_putchar((number % 10) + '0');
	}
}
/**
 * fn_int - print numbers
 * @args: list of parameters
 * Return: number of numbers printed
 */
int fn_int(va_list args)
{
	int x, num, rtn;

	x = va_arg(args, int);

	if (x < 0)
	{
		num = -x;
		_putchar('-');
		print_num(num);
		rtn = take_num(num);
		rtn += 1;
		return (rtn);
	}
	else if (x == 0)
	{
		_putchar(0);
		return (1);
	}
	else
	{
		print_num(x);
		rtn = take_num(x);
		return (rtn);
	}
}
