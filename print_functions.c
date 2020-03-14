#include <holberton.h>
/**
 * fn_string - print string that enter as parameter
 * @s: string argument
 * Return: void
 */
void fn_string(va_list s)
{
	char *s;

	s = va_arg(va_list, char *);
	_puts(s);
}
/**
 * fn_char - print char that enter as parameter
 * @c: char argument
 * Return: void
 */
void fn_char(va_list c)
{
	char c;

	c = va_arg(va_list, char);
	_putchar(c);
}
