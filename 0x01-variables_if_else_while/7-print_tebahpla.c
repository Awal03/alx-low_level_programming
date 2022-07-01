#include <stdio.h>

/**
 * main - print reverse alpahabet
 *
 * Return: success always
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
