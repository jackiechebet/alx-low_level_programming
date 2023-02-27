#include <stdio.h>
/**
 * printFibonacci - program that prints the first 98 fibonacci numbers
 * t1 is the first term and t2 the second term
 * Return: 0 always
 */
void printFibonacci(int n)
{
	static int n1=0, n2=1, n3;
	if (n > 0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%d ", n3);
		printFibonacci(n - 1);
	}

	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Fibonacci Series: ");
	printf("%d,  %d, ", 0, 1);
	printFibonacci(n - 2);

}
