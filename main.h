#ifndef MAIN_H
#define MAIN_H
#define BUFSIZE 1024;

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
int _write(char c);
int (*get_flag_func(char s))(va_list);
int *rot13(va_list arg_list);
int binary_recursive(unsigned int num, int len);
int print_binary(va_list arguments);
int print_decimal(va_list arguments);
int print_integer(va_list arguments);
int print_percent(__attribute__((unused))va_list arguments);
int print_octal(va_list arguments);
int print_unint(va_list arguments);


#endif /* MAIN_H */
