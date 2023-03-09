#include "main.h"
/**
 * _strlen_recursion - function that returns length of the string
 * @s: input string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;

	return (1 +  _strlen_recursion(s));

}

