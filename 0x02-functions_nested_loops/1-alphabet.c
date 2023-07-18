#include "main.h"

/**
 * print_alphabet - utilized on the _putchar function to print
 * The alphabet a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
