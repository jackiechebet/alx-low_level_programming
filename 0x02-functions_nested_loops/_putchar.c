# include <unistd.h>

/**
 * _putchar - writes character c stdout
 * @c: The character to print
 * Return: on success 1.
 * On error -1 is returned, and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
