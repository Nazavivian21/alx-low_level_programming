#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * Description: This function encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *rot13(char *str)
{
	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encoded = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (str[i] == original[j])
			{
				str[i] = encoded[j];
				break;
			}
		}
	}
	return (str);
}
