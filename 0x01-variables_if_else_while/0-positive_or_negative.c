#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
#include <stdio.h>
/**
 * main - program that identifies zero, positive and
 * negative numbers
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("n is positive");
	if (n == 0)
		printf("n is zero");
	if (n < 0)
		printf("n is negative");
	return (0);
}
