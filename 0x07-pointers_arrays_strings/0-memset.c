#include "main.h"
/**
 * _memset - function that fills a memory with a constant byte
 * @s: pointer to the block of memory to be filled
 * @b: value to be set
 * @n: the number of bytes to be set to the value
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
