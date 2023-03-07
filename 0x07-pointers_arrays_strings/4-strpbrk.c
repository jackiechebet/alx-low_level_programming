#include "main.h"
/**
 * _strpbrk - function that searches a string for a set of bytes
 * @s: string to be scanned
 * @accept: string containing characters to be matched
 * Return: a pointerto the character in s that
 * matches one in accept,
 * or NULL if no such character is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
