#include "main.h"

/**
 * print_more_numbers - prints more digits
 *
 * Return: void
 */
void print_more_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}
