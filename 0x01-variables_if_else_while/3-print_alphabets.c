#include<stdio.h>
/**
 * main -main entry point
 * Return: always 0
 */
int main(void)
{
	char ch = 'a';
	char b = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
	for (b = 'A'; b <= 'Z'; b++)
		putchar (b);
	putchar('\n');
	return (0);
}
