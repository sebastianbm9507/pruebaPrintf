#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char len;
	char *len2;
	
	len = 'c';
	len2 = "Hola";
	_printf("%c", len);
	printf("%c", len);
	return (0);
}
