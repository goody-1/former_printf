#include "main.h"

/**
 * _printf -produces output according to a format.
<<<<<<< HEAD
 * @format: Argument passed tothe function
 * 
=======
 * @format: a character string
 *
>>>>>>> f34751e2f18a09466dfc6d76adfdf341b1010377
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
int i, check = 0;

<<<<<<< HEAD
va_list arguments;
int (*func)(va_list);
=======
printer_t func[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
};
>>>>>>> f34751e2f18a09466dfc6d76adfdf341b1010377

va_start(arguments, format);
if (format = NULL)
return (-1);
for (i = 0; format[i]; i++)
{
if (format[i] == '%')
{
i++;
if (!(format[i]))
return (-1);
func = get_flag_func(format[i]);

if (func == NULL)
{
_write('%');
_write(format[i]);
check += 2;
}
else
check += func(arguments);
}
else
{
_write(format[i]);
check++;
}
}
va_end(arguments);
return (check);
}
