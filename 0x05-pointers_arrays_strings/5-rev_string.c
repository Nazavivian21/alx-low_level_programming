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
 * rev_string - prints a string in reverse
 * Description: This function takes a string and prints it in reverse.
 * @s: the string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char temp;

	len = _strlen(s);
	i = 0;
	j = len - 1;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
