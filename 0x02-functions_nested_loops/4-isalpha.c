#include "main.h"
/**
 * _isalpha - function that checks for alphabets
 *
 * @b: alphabet
 *
 * Return: success 1 for letter, 0 for the rest
 */
int _isalpha(int b)
{
	if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
