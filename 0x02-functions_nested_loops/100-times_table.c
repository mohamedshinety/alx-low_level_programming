#include "main.h"

/**
 * print_times_table - utilized on the _putchar function to print
 * The alphabet a - z
 * @n: paramter
*/

void print_times_table(int n)
{

	int mult, line, res;

	if (n >= 0 && n <= 15)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				res = mult * line;

				if (res <= 9)
				{
					_putchar(' ');
				}
				else if (res < 100)
				{
					_putchar(' ');
				}
				else if (res > 100)
				{
					_putchar((res / 100) + 48);
					_putchar((res % 10) % 10 + 48);
				}
				else if (res < 100 && res > 9)
				{
					_putchar((res / 10) + 48);
					_putchar((res % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
