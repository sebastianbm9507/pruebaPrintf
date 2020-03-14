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
	void (*f) (va_list);
} prinf;





/** end if */
#endif