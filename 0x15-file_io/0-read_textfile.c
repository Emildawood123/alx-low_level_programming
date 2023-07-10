#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - that function read the file and pr.
 * @filename: filename
 * @letters: numbers of letters
 * Return: numbers of letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fp;
char *s;
ssize_t re;
ssize_t wr;
if (filename == NULL)
{
return (0);
}
fp = open(filename, O_RDONLY);
if (fp == -1)
{
return (0);
}
s = malloc(sizeof(char) * letters);
re = read(fp, s, letters);
wr = write(STDOUT_FILENO, s, re);
free(s);
close(fp);
return (wr);
}
