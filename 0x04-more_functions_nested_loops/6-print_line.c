#include "main.h"

/**
 * print_line - prints lines
 * @b: number of lines
 *
 * Return: void
 */
void print_line(int b)
{
	int i;

	for (i = 0; i < b; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
