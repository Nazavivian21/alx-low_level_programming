#include "main.h"
/**
 * print_triple - prints triple numbers
 * Description: prints numbers that have threes digits
 * @res: the number to print
 * Return: void
 */
void print_tripple(int res)
{
	int left, l_left, r_left, right;

	_putchar(' ');
	left = res / 10;
	l_left = left / 10;
	r_left = left % 10;
	right = res % 10;
	_putchar('0' + l_left);
	_putchar('0' + r_left);
	_putchar('0' + right);
}
