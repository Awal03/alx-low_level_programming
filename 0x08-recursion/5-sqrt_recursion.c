#include "main.h"
/**
  * helper - square root of number
  * @i: inputed number
  * @j: iterator
  * Return: square root ot -1
  */
int helper(int i, int j)
{
	if (j % (i / j) == 0)
	{
		if (j * (i / j) == i)
			return (j);
		else
			return (-1);
	}
	return (0 + helper(i, j + 1));
}

/**
  * _sqrt_recursion - returns natural square root of a number
  * @n: the number
  * Return: natural square root of the number
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (helper(n, 2));
}
