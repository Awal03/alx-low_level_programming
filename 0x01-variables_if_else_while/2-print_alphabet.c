#include <stdio.h>

/**
 * main - Prints alphabets
 *
 * Return: success always
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
