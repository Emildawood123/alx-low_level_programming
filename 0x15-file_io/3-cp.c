#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - that copy file to anther (content)
 * @argc: numbers of paras
 * @argv: array of paras that entered
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *frombuff;
char *tobuff;
int ofrom, rfrom;
int oto, wto;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
ofrom = open(argv[1], O_RDONLY);
frombuff = malloc(1024);
if (frombuff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
exit(99);
}
rfrom = read(ofrom, frombuff, 1024);
if (rfrom == -1 || ofrom == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
oto = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
tobuff = malloc(1024);
if (tobuff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
wto = write(oto, tobuff, rfrom);
if (oto == -1 || wto == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
free(frombuff);
free(tobuff);
close(ofrom);
close(oto);
return (0);
}
/**
 * close_file - that check allow close file or no
 * @file: file
 * Return: void
 */
void close_file(int file)
{
int c;
c = close(file);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
}
}
