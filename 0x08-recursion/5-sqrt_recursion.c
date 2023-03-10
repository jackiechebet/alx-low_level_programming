#include "main.h"
#include <stdio.h>
/**
 *_sqrt_recursion - square root
 *@n: integer
 *Return: value squeare
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
  * _sqrt - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int _sqrt(int n, int i)
{


	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i += 1));
}
