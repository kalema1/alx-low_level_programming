#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints it
* @filename: file name
* @letters: nummber of letters
*
* Return: value 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, wr, rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fd);
	return (wr);
}
