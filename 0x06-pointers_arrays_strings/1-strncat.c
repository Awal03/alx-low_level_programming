#include "main.h"
/**
 * _strncat - connects two strings
 * @dest: destination integer
 * @src: source integer
 * @n: size of byte
 * Return: dest
 */
char   *_strncat(char *dest, char *src, int n)
{
	int count = 0, count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++
	}

	while (count1 < n)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
