#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the
  * POSIX standard output
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: written
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read;
	char *buff;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}

	buff = malloc(sizeof(char *) * letters);
	if (buff == NULL)
	{
		return (-1);
	}

	bytes_read = read(fd, buff, letters);
	if (bytes_read == -1)
	{
		free(buff);
		close(fd);
		return (-1);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);

	free(buff);
	close(fd);

	return (bytes_written);
}
