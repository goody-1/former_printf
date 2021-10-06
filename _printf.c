#include "main.h"

/**
 * _printf -produces output according to a format.
 * @format: a character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
int print_c;

printer_t func[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
};

va_list list;
 if (format == NULL)
 return (-1);

va_start(list, format);
print_c = printer_func(format, func, list);
va_end(list);
return (print_c);
}
