#include "main.h"

/**
 *_strcpy - a function that copies the src string to dest
 *
 * @dest: a buffer that will store src, including null char
 *
 * @src: a string
 *
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;
	int i;

	while (src[counter] != 0)
	counter++;
	for (i = 0; i < counter; i++)
	dest[i] = src[i];

	return (dest);
}
