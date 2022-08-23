#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - appends text
 * @filename: file name
 * @text_content: text to be appended
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writecount, len;
	char *buf = malloc(sizeof(text_content));

	if (buf == NULL)
		return (1);
	buf = text_content;
	len = 0;
	while (text_content[len] != '\0')
		len++;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		if (filename)
			return (1);
		else
			return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}

	writecount = write(fd, buf, len);
	if (writecount < 0 || writecount != len)
	{
		return (-1);
	}
	return (1);
}
