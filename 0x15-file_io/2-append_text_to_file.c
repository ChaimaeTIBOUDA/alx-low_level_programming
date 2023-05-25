#include "main.h"
/**
 * append_text_to_file - append text to the end of file
 * @filename: pointer to the name of file
 * @text_content: string to add
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, l);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
