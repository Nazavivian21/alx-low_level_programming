#include "main.h"
/**
 * string_toupper - a function name
 * Description: it changes all lowercase letters to uppercase
 * @c: a pointer to a string
 * Return: pointer c
 */

char *string_toupper(char *c)
{
	int a;

	a = 0;
	while (c[a] != '\0')
	{
		if (c[a] >= 97  && c[a] <= 122)
		{
			c[a] = c[a] - 32;
		}
		a++;
	}
	return (c);
}
