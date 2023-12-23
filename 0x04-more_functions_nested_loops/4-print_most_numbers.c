#include "main.h"

/**
 * print_most_numbers - a function name
 * FDescription: prints out most number
 * @i: a variable
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar (i);

		if (i == '2' || i == '4')
		{
			continue;
		}
	}
	_putchar ('\n');
}
