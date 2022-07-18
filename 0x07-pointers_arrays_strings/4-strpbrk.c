#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - to search a string for any byte
 * @s: first occurence in the string
 * @accept: if it mattches one of the bytes and NULL if it doesnt
 *Return: a pointer to byte
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
	return (NULL);
}
