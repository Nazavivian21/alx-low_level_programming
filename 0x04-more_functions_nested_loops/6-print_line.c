#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints out diagonal line to the terminal.
 * Description: this function prints out a diagonal line to the terminal.
 * @n: a variable number that stores the of times the character.
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
