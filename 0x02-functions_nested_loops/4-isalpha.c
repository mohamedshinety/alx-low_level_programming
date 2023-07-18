#include "main.h"

/**
 * _isalpha - utilized on the _putchar function to print
 * The alphabet a - z
 *
 * @c: check input of function
 *
 * Return: 1 if c is lowercase
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
