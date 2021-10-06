#include "main.h"

/**
* get_func - search and return the correct function
* @s: array to check
* Return: return a function (if written correctly)
**/

int (*get_flag_func(char s))(va_list)
{
	printer_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	unsigned int i = 0;

	for (; ops[i].symbol; i++)
	{
		if (ops[i].symbol == s)
			return (ops[i].func_t);
	}
	return (NULL);
}
