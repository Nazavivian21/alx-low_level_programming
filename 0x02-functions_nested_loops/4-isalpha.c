#include "main.h"

/**
 * _isalpha -  checks for alphabetic character
 * Description Does the stuff
 * @c: a variable that stores the alphabet
 * Return: 1 on successs and 0 on failure
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
