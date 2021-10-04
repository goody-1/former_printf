#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf -produces output according to a format.
 * @format: a character string
 * 
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
va_list list;

va_start(list, format);


va_end(list);
return (printed_arg);
}
