#include "main.h"

/**
 * puts2 - prints every other character of  string
 * @str: the string to print
 */
void puts2(charm *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0' ; i++)
	{
		;
	}
	for (j = 0 ; j < i ; j = j + 2)
	{
		-putchar(str[j]);
	}
	_putchar('\n');
}
