#include "main.h"
/**
 * _strchr - a functionthat locates a character in a string
 * @s: string to be checked
 * @c: character to be checked
 * Return: 0 always
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
