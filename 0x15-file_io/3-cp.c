#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_buffer - create buffer of 1024bytes
* @filename: pointer to buffer file
*
* Return: value 0
*/
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
/**
* close_file - close file
* @fd: file descriptor
*
* Return: no value
*/
void close_file(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* main - copies the content of a file to another file
* @argc: argument count
* @argv: argument vector
*
* Return: value 0
*/
int main(int argc, char *argv[])
{
	int fr, op, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	rd = read(fr, buffer, 1024);
	op = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(op, buffer, rd);
		if (op == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(fr, buffer, 1024);
		op = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	close_file(fr);
	close_file(op);
	return (0);
}
