#include "main.h"
/**
*_strlen - checks the length of a string.
*Description: It checks the length of a string.
*@s: A pointer variable
*Return: An integer
*/
int _strlen(char *s)
{
	int string_len;

	string_len = 0;
	while (*s != '\0')
	{
		s++;
		string_len++;
	}
	return (string_len);
}
/**
 * puts_half - prints half of a string.
 * Description: This function prints half of a string, followed by a new line.
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len;
	int start_num;

	len = _strlen(str);
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start_num = len / 2;
	}
	else
	{
		start_num = (len + 1) / 2;
	}

	for (i = start_num; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
