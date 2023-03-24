#include "main.h"

/*
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * @i: numbers
 * @j: numbers of iterations
 *
 * Return : void
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < 10)
	{
		while (i < 15)
		{
			if (i >= 10)
				_putchar (i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		i = 0;
		j++;
	}
}
