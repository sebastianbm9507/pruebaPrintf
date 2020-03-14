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
	char *grade;
	char *len2;
	int len3 = 0;
	
        grade = "camila";
	len2 = "Hola";
	len3 = _printf("%sisa%s\n", "Fred", grade);
	printf("%d\n", len3);
	return (0);
}
