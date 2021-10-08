#include "main.h"


/**
 * _hex_str - converts the number from base 10 to hex
 * @n: number to be converted
 * @hex: base of 16 being passed
 * @alpha: Char 'A' to 'F' or 'a' to 'f'
 * Return: number of chars printed
 */
int hex_string(unsigned int n, unsigned int hex, char alpha)
{
	unsigned int a = n % hex;
	unsigned int b = n / hex;
	char c;

	if (a > 10)
		c = (a - 10) + alpha;
	else
		c = a + '0';
	if (b == 0)
	{
		return (_write(c));
	}
	if (b < hex)
	{
		if (b > 10)
			return (_write(b - 10 + alpha) + _write(c));
		return (_write(b + '0') + _write(c));
	}
	return (hex_string(b, hex, alpha) + _write(c));
}

/**
 * _hex_l - printing lower case hexa
 * @list: argument recieved
 * Return: no of char printed
 */
int print_low_Hex(va_list list)
{
	return (hex_string(va_arg(list, unsigned int), 16, 'a'));
}

/**
 * _hex_u - printing upper case hexa
 * @list: argument recieved
 * Return: no. of char printed
 */

int print_upp_hex(va_list list)
{
	return (hex_string(va_arg(list, unsigned int), 16, 'A'));
}
