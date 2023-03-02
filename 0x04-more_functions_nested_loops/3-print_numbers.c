#include "main.h"
/**
 * print_numbers - function to print 0 to 9
 * Return: numbers 0 to 9
 */
void print_numbers(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
