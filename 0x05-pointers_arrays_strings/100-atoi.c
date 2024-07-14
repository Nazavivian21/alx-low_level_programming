#include "main.h"
#include <stdbool.h>
/**
 * _atoi - convert a string to an integer.
 * Description: a function that convert a string to an integer.
 * @s: the string to convert from.
 * Return: an integer
 */

int _atoi(char *s) {
    int result;
    int sign;
	int digit;
    bool start_num;

	result = 0;
	sign = 1;
	start_num = false;

    while (*s) 
	{
        if (*s == '-')
		{
            sign = -sign;
        } 
		else if (*s == '+') 
		{
          ;  
        } 
		else if (*s >= '0' && *s <= '9') 
		{
            start_num = true;
    			digit = *s - '0';
            if (result > (2147483647 - digit) / 10) 
			{
                return (sign == 1) ? 2147483647 : -2147483648;
            }
            result = result * 10 + digit;
        } 
		else if (start_num)
		{
            break; 
        }
        s++;
    }

    return sign * result;
}