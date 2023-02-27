#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: number to be checked
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int ld;

	ld = (n % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}
