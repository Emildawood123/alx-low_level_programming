#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - that copy to form
 * @argc: numbers of inputs
 * @argv: *char of inputs
 * Return: anything
 */
int main(int argc, char *argv[])
{
char *buffer = malloc(sizeof(char) * 1024);
ssize_t file_from, file_to, r, w, c;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
exit(97);
}
file_from = open(argv[1], O_RDONLY);
r = read(file_from, buffer, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
file_from = open(argv[1], O_RDONLY | O_WRONLY);
w = write(file_to, buffer, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(file_from, buffer, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);
free(buffer);
c = close(file_from);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
free(buffer);
exit(100);
}
close(file_from);
close(file_to);
return (0);
}
