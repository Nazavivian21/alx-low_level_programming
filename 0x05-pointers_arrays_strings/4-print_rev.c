#include "main.h"
/**
 * print_rev - a funtion name
 * Description: prints a string in reverse
 * @s: a pointer to a string
 * Return: a string in reverse
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
