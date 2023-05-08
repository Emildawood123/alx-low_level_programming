#include "main.h"
#include <unistd.h>
/**
 * create_file - that return or -1
 * @filename: this is name of file
 * @text_content: this is text of file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
ssize_t file, w;
int len = 0;

if (filename == NULL)
{
return (-1);
}
file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (text_content != NULL)
{
while (text_content[len])
{
len++;
}
}
w = write(file, text_content, len);
if (file == -1 || w == -1)
{
return (-1);
}
close(file);
return (1);
}
