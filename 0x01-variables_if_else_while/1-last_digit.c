#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - program that assign random numbers to n
 * Return: 0 (Succcess)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5", n, a);
	else if (a == 0)
		printf("Last digit of %d is %d and is 0", n, a);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
	printf("\n");

	return (0);
}
