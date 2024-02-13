#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 * Description: Does the stuff
 * @c: a variable
 * Return: 0 on success
 */
int _isupper(int c)
{
	if (c == 32 || c  <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
