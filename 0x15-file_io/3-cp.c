#include "main.h"

/**
  * main - Entry point
  * @argc: The argument count
  * @argv: The argument vector
  *
  * Return: ...
  */
int main(int argc, char **argv)
{
	const char *src_file;
	const char *dest_file;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_file = argv[1];
	dest_file = argv[2];

	copy_file(src_file, dest_file);

	exit(0);
}

/**
  * copy_file - copies the content of a file to another file
  * @src_file: source file
  * @dest_file: destination file
  *
  * Return: ...
  */
void copy_file(const char *src_file, const char *dest_file)
{
	int src_fd, dest_fd, readed;
	char buff[1024];

	src_fd = open(src_file, O_RDONLY);
	if (!src_file || src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}

	dest_fd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(src_fd, buff, 1024)) > 0)
	{
		if (write(dest_fd, buff, readed) != readed || dest_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			exit(99);
		}
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}
