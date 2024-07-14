#include "main.h"
/**
 * _strcpy - copies the string pointed to by src.
 * Description: copies the string pointed to by src, including the null byte.
 * @dest: the destination to be copied to
 * @src: the string to be copied
 * Return: the pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	for (; *src != '\0'; src++, dest++)
	{
		*dest = *src;
	}
	return (ptr);
}
