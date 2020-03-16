#include "holberton.h"
/**
 * fn_string - print string that enter as parameter
 * @list: va_list argument
 * Return: length of list
 */
int fn_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	_puts(s);
	return (_strlen(s));
}
/**
 * fn_char - print char that enter as parameter
 * @list: va_list argument
 * Return: length of list
 */
int fn_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
