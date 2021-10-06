#include "main.h"

/**
 * printer_func - Receives all the necessary parameters.
 * @format: A string of all characters
 * @func: list of all functions
 * @list: A list of all the arguments passed
 *
 * Return: A total of the character printed.
 */

int printer_func(const char *format, printer_t func[], va_list list)
{
int a, b, args, print_c = 0;

for (a = 0; format[a] != '\0'; a++)
{
if (format[a] == '%')
{

for (b = 0; func[b].symbol != NULL; b++)
{
if (format[a + 1] == func[b].symbol[0])
{
args = func[b].func_t(list);
if (args == -1)
return (-1);
print_c += args;
break;
}

}
if (func[b].symbol == NULL && format[a + 1] != '\0')
{
_write(format[a]);
_write(format[a + 1]);
print_c = print_c + 2;
}
else
return (-1);
}
a = a + 1;
}
_write(format[a]);
print_c++;

return(print_c);
}
