#include "main.h"

/**
 * _strlen- a function that finds the length of a string
 * @str: a pointer to the string
 * Return: the length of a string
 */
unsigned int _strlen(char *str)
{
	unsigned int  x = 0;

	while (str[x])
	{
		x++;
	}
	return (x);
}



/**
 * create_file-a function that creates a file.
 * @filename: a pointer to the filename
 * @text_content: pointer to the text to be written in the file
 * Return: 1 if success or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fildes, wlen;


	if (filename == NULL)
	{
		return (-1);
	}
	fildes = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fildes == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		wlen = write(fildes, text_content, _strlen(text_content));
	}

	close(fildes);
	if (wlen == -1)
	{
		return (-1);
	}
	return (1);
}
