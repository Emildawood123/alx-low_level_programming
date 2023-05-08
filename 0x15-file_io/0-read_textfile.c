#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - that return letters & doning somethings
 * @filename: file wanted write and read inside it
 * @letters: numbers of letters is wanted to wrtie and .
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file;
int *buffer;
ssize_t w;
ssize_t t;

file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
buffer = malloc(sizeof(char) *  letters);
w = read(file, buffer, letters);
t = write(STDOUT_FILENO, buffer, w);
free(buffer);
close(file);
return (t);
}
