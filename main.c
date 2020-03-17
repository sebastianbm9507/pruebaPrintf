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
	int x = 0;
	_printf("%r\n", "hola niños");
	x = _printf("%R\n", "Hola hola");
	return (x);
}
