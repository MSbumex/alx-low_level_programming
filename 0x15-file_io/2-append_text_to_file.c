#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/uio.h>

/**
 * append_text_to_file -  function that appends text at the end of a file.
 * where filename is the name of the file and text_content is
 * the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return 1 on success, -1 if the file can not be created, nor written,
 * If text_content is NULL, do not add anything to the file.
 * Return i if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, char_lngt = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_APPEND);
	if (op < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(op);
		return (1);
	}

	while (*(text_content + char_lngt))
		char_lngt++;

	wr = write(op, text_content, char_lngt);
	close(op);
	if (wr < 0)
		return (-1);

	return (1);

}

