#include "main.h"

/**
 * _abs - utilized on the _putchar function to print
 * The alphabet a - z
 *
 * @n: check input of function
 *
 * Return: n if c is lowercase
*/

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
