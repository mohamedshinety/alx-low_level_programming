#include "main.h"

/**
 * print_sign - utilized on the _putchar function to print
 * The alphabet a - z
 *
 * @n: check input of function
 *
 * Return: 1 if c is lowercase
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
