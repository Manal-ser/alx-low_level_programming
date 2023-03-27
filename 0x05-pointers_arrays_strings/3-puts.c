#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * to stdout
 * @str: string input
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i]);
	_putchar(str[i]);
}
