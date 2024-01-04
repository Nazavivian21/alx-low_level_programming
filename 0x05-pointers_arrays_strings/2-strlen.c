#include "main.h"
/**
 * _strlen - a function name
 * Description: It checks the length of a string
 * @s: A pointer variable
 * Return: An integer
 */
int _strlen(char *s)
{
	int string_len;

	string_len = 0;
	while (*s != '\0')
	{
		s++;
		string_len++;
	}
	return (string_len);
}
