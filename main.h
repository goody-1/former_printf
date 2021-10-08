#ifndef _PRINTF_H_
#define _PRINTF_H_


/* Importing Libraries */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* Type Definitions */

/**
 *struct format - structure for printing various types
 *@symbol: type to print
 *@func_t: function to print
 */

typedef struct printer
{
const char symbol;
int (*func_t)(va_list);
} printer_t;

/* Function Prototypes */

int _write(char c);
int _printf(const char *format, ...);
int print_char(va_list arguments);
int print_string(va_list arguments);
int print_percent(__attribute__((unused))va_list arguments);
int print_i(va_list arguments);
int print_d(va_list arguments);
int (*get_flag_func(const char s))(va_list);
int print_integer(va_list arguments);
int print_decimal(va_list arguments);
int binary_recursive(unsigned int num, int len);
int print_binary(va_list arguments);
int print_unint(va_list arguments);
int print_octal(va_list args);
int rot13(va_list arguments);
int print_rev(va_list arg_list);
int (*func_t)(va_list);


#endif /* MAIN_H */
