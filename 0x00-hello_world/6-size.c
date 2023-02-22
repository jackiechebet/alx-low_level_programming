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


	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of a int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));

	return (0);
}
