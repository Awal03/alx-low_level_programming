#include "main.h"
/**
 * _memcpy - copies bytes from @src to @dest
 * @n: the function to be copied
 * @src: where to be copied from
 * @dest: where to copy to
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
