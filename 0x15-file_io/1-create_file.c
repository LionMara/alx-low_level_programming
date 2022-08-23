#include "main.h"
#include <stdio.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be passed in
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, writecount;
	char *buf = malloc(sizeof(text_content));

	buf = text_content;

	len = 0;
	while (text_content[len] != '\0')
		len++;

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		open(filename, O_CREAT, O_EXCL);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
	{
		printf("I did not succeed\n");
		return (-1);
	}

	writecount = write(fd, buf, len);
	if (writecount < 0)
	{
		return (-1);
	}

	free(buf);
	close(fd);
	return (1);
}
