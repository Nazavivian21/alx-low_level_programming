#include "main.h"
/**
 * _strncpy - copies a string
 * Description: a function that copies a string from a source to a destination.
 * @dest: destination of the string copied.
 * @src: source of the string to be copied.
 * @n: number of bytes to be used at most.
 * Return: pointer to a destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
	{
		dest[c] = '\0';
	}
	return (dest);
}
