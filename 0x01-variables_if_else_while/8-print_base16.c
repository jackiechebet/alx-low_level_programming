#include <stdio.h>
/**
 * main - program that prints hexadecimal numbers
 * Return: always 0
 */
int main(void)
{
	char ch = '0';
	char ld = 'a';

	for (ch = '0'; ch <= '9';  ch++)
		putchar (ch);
	for (ld = 'a'; ld <= 'f'; ld++)
		putchar (ld);

	putchar ('\n');

	return (0);

}
