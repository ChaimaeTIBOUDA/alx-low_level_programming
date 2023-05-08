#include "main.h"
/**
 * create_file - create file
 * @filename: pointer to the name of file
 * @text_content: pointer string to write
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		i++;
	w = write(f, text_content, i);
	if (f == -1 || w == -1)
		return (-1);
	close(f);
	return (1);
}
