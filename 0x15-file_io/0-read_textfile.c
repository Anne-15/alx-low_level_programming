#include "main.h"

/**
 * reade_textfile - function to read a text file and print it to POSIX standard output
 * @filename: name of the file to be read 
 * @letters: number of letters to read and print
 *
 * @Return: the number of letters printed and if 0 return
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, j;
	char *bf;

	if (!filename)
		return(0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	bf = malloc(sizeof(char) * letters);
	if (!bf)
		return(0);

	i = read(fd, bf, letters);
	if (i < 0)
	{
		free(bf);
		return (0);
	}
	bf[i] = '\0';

	close (fd);

	j = write(STDOUT_FILENO, bf, i);
	if (j < 0)
	{
		free(bf);
		return (0);
	}

	free(bf);

	return (j);
}
