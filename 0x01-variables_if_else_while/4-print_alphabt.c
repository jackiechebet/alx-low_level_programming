#include <stdio.h>
/**
 * main - a program that prints alphabets
 * Return: always 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar (ch);

	putchar('\n');
	return (0);
}
