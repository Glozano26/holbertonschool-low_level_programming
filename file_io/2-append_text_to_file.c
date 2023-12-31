#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the file
 *@text_content: is the NULL terminated string to add at the end of the file
 *Return: Always 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_write = write(fd, text_content, strlen(text_content));
			if (bytes_write == -1)
			{

				return (-1);
			}
	}
	if (text_content == NULL)
		return (1);

	return (1);
}
