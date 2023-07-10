#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
int fp;
char *s;
size_t re;
size_t wr;
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
re = read(fp, s, letters);
wr = write(1, s, re);
if (wr != re)
{
return (0);
}
close(fp);
free(s);
return (re);
}
