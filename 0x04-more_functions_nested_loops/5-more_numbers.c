#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j + '0');
		}
		for (j = 10; j < 15; j++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
