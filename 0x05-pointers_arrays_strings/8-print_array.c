#include "main.h"

#include <stdio.h>
/**
 * print_array - prints a specific time number of arrays
 *
 * @a: the element's pointer
 * @n: the amount of time the element is to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
