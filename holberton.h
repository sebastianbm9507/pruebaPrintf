#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/** structure sheet */
typedef struct structformat
{
	/** indentifier to the format */
	char *identifier;
	/** function pointer according to the identifier */
	int (*f) (va_list);
} prinf;

/** function prototypes */
void _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int fn_string(va_list s);
int fn_char(va_list c);
int _strlen(char *s);

/** end if */
#endif
