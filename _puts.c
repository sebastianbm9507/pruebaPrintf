#include "holberton.h"
/**
 * _puts - prints a string followed by a new line.
 * @str: pointer parameter to a char type.
 * Return: void.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
}
