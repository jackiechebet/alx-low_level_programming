#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints natural numbers upto 98
 * @n: first natural number in the list
 * Return: all natural numbers from n to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
				printf("\n");
				break;
			}
		}
	}
	else if (n >= 98)
	{
		for ( ; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
				printf("\n");
				break;
			}
		}
	}
	else
	{
		printf("%d, ", n);
	}
}
