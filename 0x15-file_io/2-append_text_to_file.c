#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends the text to end of file
 * @filename: the name of file to be appended to
 * @text_content: text to be appended to the file
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, s, t = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content == NULL)
	{
		s = strlen(text_content);
		t = write(f, text_content, s);

		if (t != s)
			return (-1);
	}

	close(f);
	return (1);
}

