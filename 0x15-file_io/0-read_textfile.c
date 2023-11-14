#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - prints text from a file
 *
 * @filename: name of the file
 * @letters: number of characters to read
 *
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int thefile;
	int length, echars;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	thefile = open(filename, O_RDONLY);
	if (thefile == -1)
	{
		free(buf);
		return (0);
	}
	length = read(thefile, buf, letters);
	if (length == -1)
	{
		free(buf);
		close(thefile);
		return (0);
	}

	echars = write(STDOUT_FILENO, buf, length);

	free(buf);
	close(thefile);
	if (echars != length)
		return (0);
	return (length);
}
