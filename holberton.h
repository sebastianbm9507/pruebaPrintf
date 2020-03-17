#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/** structure sheet */
/**
 * struct structformat - structure
 * @identifier: char * argument
 * @f: function pointer
 */
typedef struct structformat
{
	/** indentifier to the format */
	char *identifier;
	/** function pointer according to the identifier */
	int (*f)(va_list);
} prinf;

/** function prototypes */
int _printf(const char *format, ...);
void _puts(char *str);
int _putchar(char c);
int fn_string(va_list s);
int fn_char(va_list c);
int _strlen(char *s);
int check_percent(const char *format, int *, va_list);
int validate_even(const char *format, int *i, va_list args, int num_percent);
int validate_odd(const char *format, int *i, va_list args, int num_percent);
int valid_percentage(int num_percent);
void print_num(int number);
int take_num(int number);
int fn_int(va_list args);
int fn_bin(va_list args);
int fn_octal(va_list num);
int take_num_un(unsigned int number);
int fn_un(va_list args);
void print_num_un(unsigned int number);
int fn_Hexa(va_list args);
int fn_hexa(va_list args);
int fn_rev(va_list args);
int fn_rot13(va_list args);
int not_match(int num_percent);
/** end if */

#endif
