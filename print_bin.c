#include "holberton.h"
/**
 * fn_bin - print decimal into binary number
 * @args: argument list
 * Return: Number of numbers printed
 */
int fn_bin(va_list args)
{
	unsigned int buffer[30], i, j, nums = 0;
	unsigned int dec;

	dec = va_arg(args, int);
	if (dec < 1)
	{
		_putchar('0');
		nums += 1;
	}
	else
	{
		for (i = 0; dec > 0; i++)
		{
			buffer[i] = dec % 2;
			dec = dec / 2;
		}
		buffer[i] = dec % 2;
		for (j = i - 1; j > 0; j--)
		{
			_putchar(buffer[j] + '0');
			nums += 1;
		}
		nums += 1;
		_putchar(buffer[j] + '0');
	}
	return (nums);
}
