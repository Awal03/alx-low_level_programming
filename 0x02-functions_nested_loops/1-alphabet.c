#include "main.h"
/**
 * print_alphabet -prints alphabets in lowercase and new line
 *
 */
void print_alphabet(void)
{
	int k;

	for (k = 'a', k <= 'z', k++)
	{
		_putchar(k);
	}
	_putchar('\n');

}
