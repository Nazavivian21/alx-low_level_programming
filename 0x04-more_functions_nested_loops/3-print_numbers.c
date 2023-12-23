#include "main.h"
/**
 * print_numbers - a function name
 * Description: prints numbers from one to zero
 * @i: an integer variable
 * Return: 0 on success
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
