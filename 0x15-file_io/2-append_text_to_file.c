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
 * append_text_to_file-a function that appends text at the end of a file.
 * @filename: a pointer to the filename
 * @text_content: pointer to the text to be written in the file
 * Return: 1 if success or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fildes, wlen;
	unsigned int len;


	if (filename == NULL)
	{
		return (-1);
	}
	fildes = open(filename, O_RDWR | O_APPEND);
	if (fildes == -1)
	{
		return (-1);
	}
	len = _strlen(text_content);
	if (text_content != NULL)
	{
		wlen = write(fildes, text_content, len);
	}

	close(fildes);
	if (wlen == -1)
	{
		return (-1);
	}
	return (1);
}
