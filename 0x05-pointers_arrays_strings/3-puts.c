#include "main.h"
/**
 * _puts - a function name
 * Description: a function that prints a strings
 * @str: a pointer to a string
 * Return: a string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
