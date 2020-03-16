#include "holberton.h"
/**
 * _printf - Prints according to a format specified
 * @format: conts char * argument
 * Return: length of printed character
 */
int _printf(const char *format, ...)
{
	/** my variables */
	int i, num_chars = 0;
	/** pointer to i */
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
			/** go to function check percent */
			num_chars += check_percent(format, pi, args);
			/** check if return is -1 means error */
			if (num_chars == -1)
			{
				return (-1);
			}
		}
		/** means that format[i] is not % */
		else
		{
			/** prints letter before % */
			_putchar(format[i]);
			/** counts the number pf characters to be printed */
			num_chars += 1;
		}
	}
	/** ends the list */
	va_end(args);
	/** returns the num of char printed */
	return (num_chars);
}
