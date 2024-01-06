#include "main.h"
/**
 * _strcat - a function name
 * Description: a function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int y, z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	for (z = 0; src[z] != '\0'; z++, y++)
	{
		dest[y] = src[z];
	}
	dest[y] = '\0';
	return (dest);
}
