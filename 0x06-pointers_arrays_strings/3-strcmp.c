#include "main.h"
/**
 * _strcmp - a function name
 * Description: compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}

	b = s1[a] - s2[a];
	return (b);
}
