#include <stdio.h>
/**
 * main - program to print Fibbonacci numbers
 * t1 is the first term in the sequence
 * t2 is the second term
 * Return: 0 always
 */
int main(void)
{
	int i;
	int t1 = 0, t2 = 1;

	int nextTerm = t1 + t2;

	printf("%d, %d, ", t1, t2);

	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}

