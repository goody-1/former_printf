#include "main.h"
/**
 *_printf - function to print anything
 *@format: types of argument passed to the function
 *
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
int check = 0, i;
va_list arguments;
int (*func_t)(va_list);

va_start(arguments, format);
if (format == NULL)
return (-1);
for (i = 0; format[i]; i++)
{
if (format[i] == '%')
{
i++;
if (!(format[i]))
return (-1);
func_t = get_flag_func(format[i]);
if (func_t == NULL)
{
_write('%');
_write(format[i]);
check += 2;
}
else
check += func_t(arguments);
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
