#include "main.h"

/**
 * _islower - utilized on the _putchar function to print
 * The alphabet a - z
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
