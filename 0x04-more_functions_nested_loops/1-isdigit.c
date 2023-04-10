#include "main.h"

/**
 * _isdigit - check for digit
 *
 * @c : the character to be checked
 *
 * Return: 1 if it is digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
