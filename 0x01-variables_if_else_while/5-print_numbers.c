#include <stdioi.h>
/**
 * main - Prints all single digit numbers including 0
 *
 * Return: 0 on Success
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
