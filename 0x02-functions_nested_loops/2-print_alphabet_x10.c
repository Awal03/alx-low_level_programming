#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: success always (0)
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
