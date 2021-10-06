#include "main.h"

/**
 * _printf -produces output according to a format.
 * @format: Argument passed to the function
 *  
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
int i, check = 0;

va_list arguments;
int (*func)(va_list);

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
