#include "holberton.h"
/**
 * fn_rev - print string in reverse
 * @args: list of args in the elipsis
 * Return: number of characters printed
 */
int fn_rev(va_list args)
{
	char *s = va_arg(args, char *);
	int c = 0, num = 0;

	while (*(s + c) != '\0')
	{
		c++;
	}
	c--;
	while (c >= 0)
	{
		_putchar(*(s + c));
		c--;
		num += 1;
	}
	return (num);
}
