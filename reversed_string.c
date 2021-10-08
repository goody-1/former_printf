#include "main.h"

/**
 * print_reversed - print a reversed string
 * @arg_list: arguments to increment
 * 
 * Return: number of characters
 */

int print_rev(va_list arg_list)
{
char *s = va_arg(arg_list, char *);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_write(s[i]);
	return (j);

}
