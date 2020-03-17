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
	printf("=============\n");
	printf("TESTING CASES\n");
	printf("=============\n\n");
	/**
	_printf(NULL);
	printf(NULL);
	printf("--------------------------\n");
	printf("Testing %% without formats\n");
	printf("--------------------------\n\n");
	
	_printf("Own printf: %%\n");
	printf("Original printf: %%\n");
	printf("--------------------------\n");
	
	printf("Own printf:\n");
	_printf("hola%");
	_printf("\n1");
	_printf("\b3");
	_printf("\f4");
	_printf("\r5");
	_printf("\t6");
	_printf("\v7");
	printf("Original printf:\n");
	printf("hola%");
	printf("\n1");
	printf("\b3");
	printf("\f4");
	printf("\r5");
	printf("\t6");
	printf("\v7");
	printf("--------------------\n");
	_printf("Own printf: %");
	printf("\nOriginal printf: %");*/
	printf("--------------------------\n");
	_printf("Own printf: %%%zhola; ");
	printf("Original printf: %%%zhola");
	printf("\n--------------------------\n");
	_printf("Own printf: %%%z\n");
	printf("Original printf: %%%z\n");

	return (0);
}
