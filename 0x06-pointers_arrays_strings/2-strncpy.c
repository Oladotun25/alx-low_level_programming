#include "main.h"
/**
 * _strncpy - concatenate two strings but add inputed number of bytes
 * @dest: string to be appended upon
 * @src: string to be completd at end of dest
 * @n: integer parameter to compare index to
 * Return: returns new cocatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
