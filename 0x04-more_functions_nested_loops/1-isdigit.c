#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * Description: checks for a digit 
 * @c: a varible storing integers
 * Return: 1 on Success and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
