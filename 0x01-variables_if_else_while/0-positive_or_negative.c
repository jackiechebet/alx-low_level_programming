#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - program that shows whether numbers are positive
 * negative or zero.
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("and the number is:");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("is positive");
	}
	if (n < 0)
	{
		printf("is negative");
	}
	if (n == 0)
	{
		printf("is zero");
	}
	return (0);
}
