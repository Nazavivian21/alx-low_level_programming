#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet
 * Description: It prints out the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
