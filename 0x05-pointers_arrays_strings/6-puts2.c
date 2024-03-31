#include "main.h"
/**
 * puts2 - prints every other character of a string
 * Description: this function prints out every other character in a string
 * Return: void
 */
void puts2(char *str)
{
	nt i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
