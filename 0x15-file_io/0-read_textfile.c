#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Reads text file and prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 * Return: number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	ssize_t read_letters, write_letters;
	char *q;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	q = malloc(sizeof(char) * letters);
	if (q == NULL)
	{
		close(f);
		return (0);
	}

	read_letters = read(f, q, letters);
	if (read_letters == -1)
	{
		close(f);
		free(q);
		return (0);
	}
	write_letters = write(STDOUT_FILENO, q, read_letters);

	close(f);
	free(q);

	return (write_letters);
}
