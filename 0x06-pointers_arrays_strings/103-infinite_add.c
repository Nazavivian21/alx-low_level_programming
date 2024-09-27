#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer r.
 *
 * Return: A pointer to the result (buffer r) on success, or
 *         0 if the result cannot be stored in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int start, end;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0, sum, i, j, k;
	char temp;

	if (len1 + 1 > size_r && len2 + 1 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		if (k >= size_r - 1)
			return (0);

		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}

	r[k] = '\0';

	for (start = 0, end = k - 1; start < end; start++, end--)
	{
		temp = r[start];
		r[start] = r[end];
		r[end] = temp;
	}

	return (r);
}
