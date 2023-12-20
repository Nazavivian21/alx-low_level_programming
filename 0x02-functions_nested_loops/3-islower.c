#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * Description: Does the stuff
 * @c: a variable that stores characters
 * Return: 1 on success and 0 on failure
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
