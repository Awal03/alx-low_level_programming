#include "main.h"

/**
 * _islower - function checks for lowercase
 *
 * @b: alphabet
 *
 * Return: success if 1
 */
int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
