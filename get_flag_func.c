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

	int i;

	for (i = 0; ops[i].symbol != NULL; i++)
	{
		if (*ops[i].symbol == s)
			return (ops[i].func_t);
	}
	return (NULL);
}