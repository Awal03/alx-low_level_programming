#include "main.h"
/**
 * *_strcat - connects two strings
 * @dest: destination integer
 * @src: source integer
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count1 >= 0)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
