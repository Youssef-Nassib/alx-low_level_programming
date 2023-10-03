#include "main.h"

/**
 * append_text_to_file - Append text at the end of the file.
 * @filename: A pointer point to the name of the file.
 * @text_content: The string we want to add to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL
 *         -1 If the file does not exist the user lacks write permission
 *         1 Otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, length);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
