#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @src: points to source input
 * @dest: points to destination input
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
char *p = dest;

while (*dest != '\0')
dest++;
while (*src != '\0')
*dest++ = *src++;
*dest = '\0';
return(p);
}
