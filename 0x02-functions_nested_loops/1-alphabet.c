#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - program that prints letters of alphabets
 * Return: always 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
