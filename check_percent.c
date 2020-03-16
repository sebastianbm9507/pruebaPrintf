#include "holberton.h"
/**
 *
 *
 *
 */
int validate_even(const char *format, int *i, va_list args, int num_percentages);
int validate_odd(const char *format, int *i, va_list args, int num_percentages);
int valid_percentage(int num_percentages);

int check_percent(const char *format, int *i, va_list args)
{
	int num_percentages = 0, j = 0, result = 0;

	while (format[*i] == '%') /** checking if fromat position is % */
	{
		num_percentages += 1;
		*i = *i + 1;
	}
	if ((num_percentages % 2) != 0) /** checking if times % is odd */
	{
		if (format[*i] != '\0')
		{
			result = validate_odd(format, i, args, num_percentages);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		if (format[*i] != '\0')
			result = validate_even(format, i, args, num_percentages);
		else
		{	/**print number of valid % and return number printed*/
			result = valid_percentage(num_percentages);
			return (result);
		}
	}
	return (result);
}

/** Impares**/
int validate_odd(const char *format, int *i, va_list args, int num_percentages)
{
	prinf fns[] = {
		{"s", fn_string},
		{"c", fn_char},
		{NULL, NULL}
	};
	int counter = 0, num_chars2 = 0, j;

	while (fns[counter].identifier != NULL)
	{
		if (format[*i] == fns[counter].identifier[0])
		{
			j = 0;
			while (j < ((num_percentages - 1) / 2))
			{
				_putchar('%');
				j++;
			}
			num_chars2 += ((num_percentages - 1) / 2);
			num_chars2 += fns[counter].f(args);
			break;
		}
		counter++;
	}
	if (fns[counter].identifier == NULL) /* Doesn't find any datatype*/
	{
		return (-1);
	}
	return (num_chars2);
}
/** pares */
int validate_even(const char *format, int *i, va_list args, int num_percentages)
{
	prinf fns[] = {
		{"s", fn_string},
		{"c", fn_char},
		{NULL, NULL}
	};
	int counter = 0, num_chars2 = 0, j;

	while (fns[counter].identifier != NULL)
	{
		if (format[*i] == *fns[counter].identifier)
		{
			return (-1);
		}
		counter++;
	}
	if (fns[counter].identifier == NULL)
	{
		j = 0;
		while (j < ((num_percentages) / 2))
		{
			_putchar('%');
			j++;
		}
		num_chars2 += ((num_percentages) / 2);
		_putchar(format[*i]);
		num_chars2 += 1;
	}
	return (num_chars2);
}
/**
 *
 *
 *
 */
int valid_percentage(int num_percentages)
{
	int k = 0;

	while (k < (num_percentages / 2))
	{
		_putchar('%');
		k++;
	}
	return ((num_percentages / 2));
}