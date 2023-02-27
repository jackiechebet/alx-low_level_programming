#include "main.h"
/**
 * times_table - prints out multiplication table of 9
 * r = row, c = column n = current result
 * Return: multiplication table of 9
 */
void times_table(void)
{
	int r, c, n;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			n = (r * c);
			if ((n / 10) > 0)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((n % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

