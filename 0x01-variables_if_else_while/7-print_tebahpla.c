#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: 0 on Success
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar ('\n');

	return (0);
}
