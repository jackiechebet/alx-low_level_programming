#include "main.h"
/**
 * _puts - function that prints string to stdout
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
