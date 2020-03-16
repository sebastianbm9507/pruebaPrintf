#include "holberton.h"
/**
 * check_percent - check number of percentages to print them
 * @format: pointer to first string's character passed to _printf
 * @i: pointer to i variable value
 * @args: name of arguments list
 * Return: number of characters printed
 */
int check_percent(const char *format, int *i, va_list args)
{
	int num_percent = 0, result = 0;

	while (format[*i] == '%') /**checking if format position is % */
	{
		num_percent += 1; /**counting number of % */
		*i = *i + 1;
	}
	if ((num_percent % 2) != 0) /** checking if times % is odd*/
	{
		if (format[*i] != '\0')
		{
	/**Return number-characters printed and print percentages-value of arguments*/
			result = validate_odd(format, i, args, num_percent);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		if (format[*i] != '\0')
	/**Return number-characters printed and print percentages-value of arguments*/
			result = validate_even(format, i, args, num_percent);
		else
		{	/**print number of valid % and return number printed*/
			result = valid_percentage(num_percent);
			return (result);
		}
	}
	return (result);
}
/**
 * validate_odd - compare format value with structure identifier value
 * @format: pointer to first string's character passed to _printf
 * @i: pointer to i variable value
 * @args: name of arguments list
 * @num_percent: number of percentages
 * Return: number of characters printed
 */
int validate_odd(const char *format, int *i, va_list args, int num_percent)
{
	prinf fns[] = {
		{"s", fn_string},
		{"c", fn_char},
		{"d", fn_int},
		{"i", fn_int},
		{NULL, NULL}
	};
	int counter = 0, num_chars2 = 0, j;

	while (fns[counter].identifier != NULL)
	{
		if (format[*i] == fns[counter].identifier[0])
		{
			j = 0;
			while (j < ((num_percent - 1) / 2))/**print percentages*/
			{
				_putchar('%');
				j++;
			}
			/**adding the number of characters printed*/
			num_chars2 += ((num_percent - 1) / 2);
			num_chars2 += fns[counter].f(args);/**calling function to print*/
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
/**
 * validate_even - compare format value with structure identifier value
 * @format: pointer to first string's character passed to _printf
 * @i: pointer to i variable value
 * @args: name of arguments list
 * @num_percent: number of percentages
 * Return: number of characters printed
 */
int validate_even(const char *format, int *i, va_list args, int num_percent)
{
	prinf fns[] = {
		{"s", fn_string},
		{"c", fn_char},
		{"d", fn_int},
		{"i", fn_int},
		{NULL, NULL}
	};
	int counter = 0, num_chars2 = 0, j;

	args = args;
	while (fns[counter].identifier != NULL)
	{
		if (format[*i] == *fns[counter].identifier)/**value equal to identifier*/
		{
			return (-1);
		}
		counter++;
	}
	if (fns[counter].identifier == NULL)
	{
		j = 0;
		while (j < ((num_percent) / 2))/**print percentages*/
		{
			_putchar('%');
			j++;
		}
		/**adding the number of characters printed*/
		num_chars2 += ((num_percent) / 2);
		_putchar(format[*i]);
		num_chars2 += 1;
	}
	return (num_chars2);
}
/**
 * valid_percentage - print valid percentages
 * @num_percent: number of percentages
 * Return: number of characters printed
 */
int valid_percentage(int num_percent)
{
	int k = 0;

	while (k < (num_percent / 2))
	{
		_putchar('%');
		k++;
	}
	return ((num_percent / 2));
}
