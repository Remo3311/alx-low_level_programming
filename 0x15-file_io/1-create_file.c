#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - creates a file and puts text in it
 * with 600 perms (do not change if it exists)
 *
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int thefile, int str = 0, len = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	thefile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (thefile == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0, ptr = text_content; *ptr; ptr++)
			len++;
		str = write(thefile, text_content, len);
	}

	if (close(thefile) == -1 || len != str)
		return (-1);
	return (1);
}
