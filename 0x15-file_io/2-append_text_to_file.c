#include "main.h"
/**
 * append_text_to_file - append text at the end odf file
 * @filename: pointer to the file
 * @text_content: string to add
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int w;
	int i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			i++;
	}
		op = open(filename, O_WRONLY | O_APPEND);
		w = write(op, text_content, i);
		if (op == -1 || w == -1)
			return (-1);
		close(op);
		return (1);
}
