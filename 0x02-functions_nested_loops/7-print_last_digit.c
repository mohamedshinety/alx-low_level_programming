#include "main.h"

/**
 * print_last_digit - utilized on the _putchar function to print
 * The alphabet a - z
 *
 * @r: check input of function
 *
 * Return: lastDigit if c is lowercase
*/

int print_last_digit(int r)
{
	int lastDigit;

	if (r < 0)
		lastDigit = -1 * (r % 10);
	else
		lastDigit = r % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
