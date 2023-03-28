#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
        int l, i;
	char rev;

	i = 0;

	for (l = strlen(s) - 1; l >= strlen(s) / 2; l--)
	{
		rev = s[l];
		s[l] = s[i];
		s[i] = rev;
		i++;
	}
}
