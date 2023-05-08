#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* append_text_to_file - appends text to the file
* @filename: file name
* @text_content: pointer to the string to be added
*
* Return: value 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int rd, wr, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
			;
	}
	rd = open(filename, O_WRONLY | O_APPEND);
	wr = write(rd, text_content, l);
	if (rd == -1 || wr == -1)
		return (-1);
	close(rd);
	return (1);
}
