#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: size of array argv
 * @av: an array of size argc
 * Return: Nothing
 */
int main(int argc, char *av[])
{
	int type1, type2, typeread, typewrite, err_close;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	type1 = open(av[1], O_RDONLY);
	if (type1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	type2 = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (type2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	do {
		typeread = read(type1, buffer, 1024);
		if (typeread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		typewrite = write(type2, buffer, typeread);
		if (typewrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (typeread == 1024);

	if (close(type1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", type1);
		exit(100);

	return (0);
}
