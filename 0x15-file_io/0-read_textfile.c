#include "main.h"
/**
 * read_textfile-a function that reads a txt and prints it to the std output.
 * @filename: pointer to the file
 * @letters: number of letters to be read
 * Return:number of letters it could read and print of 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fildes;
	size_t readlen, writelen;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	readlen = read(fildes, buff, letters);
	writelen = write(STDOUT_FILENO, buff, readlen);
	if (readlen != writelen)
	{
		return (0);
	}
	free(buff);
	return (readlen);


}
