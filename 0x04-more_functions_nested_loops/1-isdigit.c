#include "main.h"
#include <ctype.h>
/**
 * _isdigit - a function that checks for a digit between
 * 0 and 9
 * @c: input to be checked
 * Return: 1 if is a digit and 0 if otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
