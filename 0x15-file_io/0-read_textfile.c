#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads file and does other stuff
 * @filename: file to be read
 * @letters: size of bytes passed
 * Return: returns number of chars printed out to the stdoutput
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, writecount, readcount;
	char *buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		return (0);
	}


	readcount = read(fd, buf, letters);
	if (readcount < 0)
		return (0);

	writecount = write(STDOUT_FILENO, buf, readcount);
	if(writecount < 0)
		return (0);

	return (readcount);
}
