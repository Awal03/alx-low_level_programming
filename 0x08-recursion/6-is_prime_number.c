#include "main.h"
/**
  * oh_prime - prime number
  * @i: inputed number
  * @j: iterator
  * Return: 1 if its a prime number if not 0
  */
int oh_prime(unsigned int i, unsigned int j)
{
	if (i % j == 0)
	{
		if (i == j)
			return (1);
		else
			return (0);
	}
	return (0 + oh_prime(i, j + 1));
}

/**
  * is_prime_number - it is a prime number
  * @n: inputed number
  * Return: 1 if its a prime number if not 0
  */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (oh_prime(n, 2));
}
