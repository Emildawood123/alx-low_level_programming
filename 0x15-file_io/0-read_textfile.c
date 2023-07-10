#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
int fp;
char *s;
if (filename == NULL)
{
return (0);
}
fp = open(filename, O_RDONLY);
if(fp == -1)
{
return (0);
}
s = malloc(letters);
letters = read(fp, s, letters);
if ((size_t) write(1, s, letters) != letters)
{
return (0);
}
close(fp);
free(s);
return (letters);
}
