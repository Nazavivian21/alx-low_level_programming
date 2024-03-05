#include "main.h"

/**
 * print_most_numbers - a function name
 * FDescription: prints out most number
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		if (i == 50)
		{
			continue;
		}
		if (i == 52)
		{
			continue;
		}
		_putchar (i);
	}
	_putchar ('\n');
}
