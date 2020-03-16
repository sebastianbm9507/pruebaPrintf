#include "holberton.h"
#define BUFFERSIZE 1024
/**
 *
 *
 *
 *
 *
 */

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	/** my variables */
	int i, j, num_chars = 0;
	int *pi = &i;
	/** initialize my list */
	va_list args;
	/** starting my list */
	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	/** iterating format */
	for (i = 0; format[i] != '\0'; i++)
	{
		/** checking if format is % */
		if (format[i] == '%')
		{
			num_chars += check_percent(format, pi, args); /** check the number of percentages symbols to print*/
			if (num_chars == -1)
			{
				return (-1);
			}
		}
		else
		{
			_putchar(format[i]);
			num_chars += 1;
		}
	}
	if (format[i] == '\0' && args != NULL)
		return (-1);
	va_end(args);
	return (num_chars);
}
