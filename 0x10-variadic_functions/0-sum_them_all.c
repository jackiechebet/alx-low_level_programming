#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum of all it's parameters
 * @n: first input
 * Return: sum of all its paramaters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
