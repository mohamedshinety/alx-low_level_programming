#include "main.h"

/**
 * times_table - utilized on the _putchar function to print
 * The alphabet a - z
*/

void times_table(void)
{
	int mult, line;

	for (line = 0; line <= 9; line++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			mult = mult * line;
			if (mult <= 9)
				_putchar(mult + 48);
			else
			{
				_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
