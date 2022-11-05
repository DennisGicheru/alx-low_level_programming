#include "main.h"

/**
* read_textfile - reads text file and prints to POSIX std outpout
* @filename: pointing to a string of 0 and 1 characters
* @letters:  number of letters to read and print
*Return: number of printed characters or 0
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int filetxt;
	ssize_t nrd, nwr;
	char *buffer;

	if (filename == NULL)
		return (0);

	filetxt = open(filename, O_RDONLY);
	if (filetxt == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	nrd = read(filetxt, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);
	close(filetxt);
	
	free(buffer);
	return (nwr);
}
