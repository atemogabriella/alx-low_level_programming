#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file and writes given text to it
 * @filename: this is the name of the file to be created
 * @text_content: the words to be written in the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, q, z;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR, S_IWUSR);
	if (f == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(f);
		return (1);
	}

	z = 0;
	while (text_content[z] != '\0')
		z++;

	q = write(f, text_content, z);

	if (q == -1)
	{
		close(f);
		return (-1);
	}

	if (q != z)
	{
		close(f);
		return (-1);
	}

	close(f);
	return (1);
}



