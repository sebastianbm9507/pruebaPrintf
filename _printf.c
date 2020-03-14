#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	/** my variables */
	int i, j, num_chars = 0;
	/** initialize my list */
	va_list args;
	/** instance to my code */
	prinf fns[] =
	{
		{"s", fn_string},
		{"c", fn_char}
	};
	/** starting my list */
	va_start(args, format);

	/** iterating format */
	for (i = 0; format[i] != '\0'; i++)
	{
		/** checking if format is % */
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 2; j++)
			{
				if (format[i] == *fns[j].identifier)
				{
					num_chars += fns[j].f(args);
				}	
			}
		}
		else
		{
			_putchar(format[i]);
			num_chars += 1;
		}
	}
	return (num_chars);
}
