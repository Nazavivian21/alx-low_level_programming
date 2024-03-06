#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - a function that prints out a diagonal line.
 * Description: this function prints out characters in a shape of a line.
 * @n: n is the number of times the character \ should be printed.
 * Return: void
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
