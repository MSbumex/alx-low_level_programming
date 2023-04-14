#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/uio.h>

/**
 * create_file - function that creates a file.
 * where filename is the name of the file to create and
 * text_content is a NULL terminated string to write to the file
 *Returns: 1 on success, -1 on failure (file can not be created,
 *file can not be written, write “fails”, etc…)
 *The created file must have those permissions: rw-------.
 If the file already exists, do not change the permissions.
 *if the file already exists, truncate it
 *if filename is NULL return -1
 *if text_content is NULL create an empty file
 *
 * @filename: filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, char_len = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (op < 0)
		return (-1);

	while (text_content && *(text_content + char_len))
		char_len++;

	wr = write(op, text_content, char_len);
	close(op);
	if (wr < 0)
		return (-1);
	return (1);
}
