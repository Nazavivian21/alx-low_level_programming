#include "main.h"

/**
 * print_double - Prints a double digit number
 * @num: The number to print
 * Description: Prints a double_digit number
 * Return: Nothing
 */
void print_double(int num)
{
	int left, right;

	_putchar(' ');
	_putchar(' ');
	left = num / 10;
	right = num % 10;
	_putchar('0' + left);
	_putchar('0' + right);
}
