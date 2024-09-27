#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an integer.
 * Description: this function prints an interger argument
 * @n: The integer to be printed.
 * Resturn: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
