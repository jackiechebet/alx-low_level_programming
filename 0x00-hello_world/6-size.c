#include<stdio.h>
/**
 * main - print sizes of int, long int,long long int,
 * char and float in bytes
 * Return: 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int longintType;
	long long int longlongintType;


	printf("Size of a char: %zu byte\n", sizeof(charType));
	printf("Size of a int: %zu byte\n", sizeof(intType));
	printf("Size of a long int: %zu byte\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte\n", sizeof(longlongintType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
