#include <stdio.h>

/** 
 * main - prints numbers from 0 t0 9
 *
 * Return: success always
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
