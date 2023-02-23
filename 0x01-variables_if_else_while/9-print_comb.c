#include <stdio.h>
/**
 * main - program that prints single digits
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');

	return (0);
}

