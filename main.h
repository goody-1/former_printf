#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct printer - defines a structure for symbols and func.
 * @symbol: the operator for a function
 * @func: a function
 */

struct printer
{
char *symbol;
int (*func)(va_list);
}; typedef struct printer print_t;

/* function that produces output according to a format */
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif /* MAIN_H */
