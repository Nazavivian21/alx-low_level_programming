#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename:  a variable that stores a filenttame.
 * @text_content: a NULL terminated string to write the file.
 * Return: 0
*/
int create_file(const char *filename, char *text_content)
{
	int file, result, count;

	result = 1;
	count = 0;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[count])
		{
			count++;
			result = write(file, text_content, count);
		}
		if (result == -1)
		return (-1);
		close(file);
		return (1);
	}
}
