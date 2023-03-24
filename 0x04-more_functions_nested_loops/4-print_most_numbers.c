#include"main.h"

/**
 * print_most_numbers - prints 01356789
 * Return : void
 */

void print_most_numbers(void)
{
	int i;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
	_putchar('\n');
}
