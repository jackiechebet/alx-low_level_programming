#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: mainstring
 * @needle: substring to be searched in the main string
 * Return: the pointer to the first occurrence of the 
 * given substring in the main string
 * else returns a null pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int p;

	while (*haystack)
	{
		for (p = 0; needle[p]; p++)
		{
			if (*haystack == needle[p])
				return (needle);
		}
		haystack++;

	}
	return ('\0');
}
