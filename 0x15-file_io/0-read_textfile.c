#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this reads a text and prints it to POSIX stdout
 * @filename: this is a pointer to the name of the file
 * @letters: this is the number of letters the function should read and print
 * Return: if the function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *guard;

	if (filename == NULL)
		return (0);

	guard = malloc(sizeof(char) * letters);
	if (guard == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, guard, letters);
	w = write(STDOUT_FILENO, guard, r);

	if (o == -1 || r  == -1 || w == -1 || w != r)
		{
			free(guard);
			return (0);
		}

	free(guard);
	close(0);

	return (w);
}
