#include "main.h"

/**
 * times_table - utilized on the _putchar function to print
 * The alphabet a - z
*/

void times_table(void)
{
	int mult, line, res;

	for (line = 0; line <= 9; line++)
	{
		_putchar(48);
		for (mult = 0; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			res = mult * line;

			if (res <= 9)
			{
				_putchar(' ');
			}
			else		
				_putchar((res / 10) + 48);

			_putchar((res % 10) + 48);
			}
		_putchar('\n');
	}
}
