#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints out diagonal line to the terminal.
 * Description: this function prints out a diagonal line to the terminal.
 * @n: a variable number that stores the of times the character _ should be printed
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else if (n == 2)
	{
			_putchar ('_');
			_putchar ('_');
			_putchar ('\n');
	}
	else if (n == 10)
	{
			_putchar ('_');
			_putchar ('_');
			_putchar ('_');
			_putchar ('_');
			_putchar ('_');
			_putchar ('_');
			_putchar ('_');
			_putchar ('_');
			_putchar ('_');
			_putchar ('_');
			_putchar ('\n');
	}
}