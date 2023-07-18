#include "main.h"

/**
 * print_alphabet_x10 - utilized on the _putchar function to print
 * The alphabet a - z
*/

void print_alphabet_x10(void)
{
	int ch, line;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
