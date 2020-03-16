#include "holberton.h"
/**
 *
 *
 *
 */
int take_num(int number)
{
	if (number / 10)
	{
		return (1 + take_num(number / 10));
	}
	else
		return(1);
}
/**
 *
 *
 */
void print_num(int number)
{
	if (number / 10)
	{
		print_num(number / 10);
		putchar((number % 10) + '0');
	}
	else
	{
		putchar((number % 10) + '0');
	}
}
/**
 *
 *
 *
 */
int fn_int(va_list args)
{
	int x, num, rtn;

	x = va_arg(args, int);

	if (x < 0)
	{
		num = -x;
		putchar('-');
		print_num(num);
		rtn = take_num(num);
		rtn += 1;
		return (rtn);
	}
	else if (x == 0)
	{
		putchar(0);
		return (1);
	}
	else
	{
		print_num(x);
		rtn = take_num(x);
		return (rtn);
	}
}