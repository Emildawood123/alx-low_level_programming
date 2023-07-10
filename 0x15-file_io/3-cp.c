#include <stdlib.h>
#include <stdio.h>
#include "main.h"
void close_file(int file);
/**
 * main - that copy file to anther (content)
 * @argc: numbers of paras
 * @argv: array of paras that entered
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *buff;
int ofrom, rfrom;
int oto, wto;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
ofrom = open(argv[1], O_RDONLY);
buff = malloc(1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
rfrom = read(ofrom, buff, 1024);
oto = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
do {
if (rfrom == -1 || ofrom == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
wto = write(oto, buff, rfrom);
if (oto == -1 || wto == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
rfrom = read(ofrom, buff, 1024);
oto = open(argv[2], O_WRONLY | O_APPEND);
} while (rfrom > 0);
free(buff);
close_file(ofrom);
close_file(oto);
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
exit(100);
}
}
