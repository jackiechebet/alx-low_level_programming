#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main -print the multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: multiplication of two numbers
 * else when the program does not receive two arguments
 * program should print 'Error' followed by a new line and return  1
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = 1;

		for (i = 1; i < 3; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}



