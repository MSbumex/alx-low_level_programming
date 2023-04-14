#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/uio.h>

/**
 * read_textfile -  function that reads a text file and prints it to
 * the POSIX standard output.
 *where letters is the number of letters it should read and print
 *returns the actual number of letters it could read and print
 *if the file can not be opened or read, return 0
 *if filename is NULL return 0
 *if write fails or does not write the expected amount of bytes, return 0
 * @filename: filename to open
 * @letters:number of letters to read and print
 * Return: number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *let_tmp;

	if (filename == NULL)
		return (0);

	let_tmp = malloc(sizeof(char) * letters);
	if (let_tmp == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op < 0)
	{
		free(let_tmp);
		return (0);
	}

	rd = read(op, let_tmp, letters);
	if (rd < 0)
	{
		free(let_tmp);
		return (0);
	}

	wr = write(STDOUT_FILENO, let_tmp, rd);
	free(let_tmp);
	close(op);

	if (wr < 0)
		return (0);
	return ((ssize_t)wr);
}
