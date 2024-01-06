#include "main.h"
/**
 * strncpy - a function name
 * Description: a function that copies astring
 * @dest: destination strig pointer
 *
 * Return: pointer to a destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = '\0';
	}
	return (dest);
}
