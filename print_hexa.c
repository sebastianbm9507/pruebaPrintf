#include "holberton.h"
/**
 * fn_Hexa - Turns a decimal into hexa upper case
 * @args: va_list argument
 * Return: number of char printed
 */
int fn_Hexa(va_list args)
{
	/** char array to store hexadecimal number */
	char hexaDeciNum[100];
	unsigned int i, n, temp;
	int j;
	n = va_arg(args, int);

	/** counter for hexadecimal number array */
	i = 0;
	while (n != 0)
	{
		/** temporary variable to store remainder */
		temp  = 0;

		/** storing remainder in temp variable. */
		temp = n % 16;

		/** check if temp < 10 */
		if (temp < 10)
		{
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else
		{
			hexaDeciNum[i] = temp + 55;
			i++;
		}
		n = n / 16;
	}
	/** printing hexadecimal number array in reverse order */
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hexaDeciNum[j]);
	}
	return (i);
}
/**
 * fn_hexa - Turns decimal into hexa lowercase
 * @args: va_list argument
 * Return: number of chars printed
 */
int fn_hexa(va_list args)
{
	/** char array to store hexadecimal number */
	char hexaDeciNum[100];
	unsigned int i, n, temp;
	int j;
	n = va_arg(args, int);
	/** counter for hexadecimal number array */
	i = 0;
	while (n != 0)
	{
		/** temporary variable to store remainder */
		temp  = 0;
		/** storing remainder in temp variable. */
		temp = n % 16;
		/** check if temp < 10 */
		if (temp < 10)
		{
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else
		{
			hexaDeciNum[i] = temp + 87;
			i++;
		}
		n = n / 16;
	}
	/** printing hexadecimal number array in reverse order*/
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hexaDeciNum[j]);
	}
	return (i);

}
