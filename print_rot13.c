#include "holberton.h"
/**
 * fn_rot13 - print string encode in rot13
 * @args: parameters passed in the elipsis
 * Return: number of characters printed
 */
int fn_rot13(va_list args)
{
	int i = 0, j/**, k*/, num = 0;
	char temp;
	char *s = va_arg(args, char *);

	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (abc[j] != '\0')
		{
			if (s[i] == abc[j])
			{
				temp = rot13[j];
				_putchar(temp);
				num += 1;
				break;
			}
			j++;
		}
		i++;
		if (!(s[i] > 64 && s[i] < 91) && !(s[i] > 96 && s[i] < 123))
		{
			_putchar(s[i]);
			num += 1;
		}
	}
	return (num - 1);
}
