#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: NULL if min > max or if malloc fails, pointer to new array
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);
	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= max - max; i++)
		s[i] = min + i;
	return (s);
}
