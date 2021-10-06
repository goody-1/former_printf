#ifndef MAIN_H
#define MAIN_H
 #include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct printer - defines a structure for symbols and func.
 * @symbol: the flag
 * @func: a function
 */

typedef struct printer
{
char *symbol;
int (*func_t)(va_list);
} printer_t;

/* function that produces output according to a format */
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int _write(char c);
int (*get_flag_func(char s))(va_list);
int *rot13(va_list arg_list);

#endif /* MAIN_H */
