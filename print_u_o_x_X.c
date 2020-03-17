#include "holberton.h"
/**
 * fn_octal - convert decimal to octal
 * @num: va_list argument
 * Return: numbers printed char
 *
 */
int fn_octal(va_list num)
{
	unsigned int n = va_arg(num, int);
	  /** array to store octal number */
	int j,  octalNum[100];
    /** counter for octal number array */
	int i = 0;

	while (n != 0)
	{
		/** storing remainder in octal array */
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}
	/** printing octal number array in reverse order */
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octalNum[j] + '0');
	}
	/** count the chars printed */
	return (i);
}
