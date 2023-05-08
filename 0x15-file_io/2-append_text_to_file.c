#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - that return 1 or -1 and append to file
 * @filename: name of file
 * @text_content: text of file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t file;
ssize_t w;
int len = 0;
if (text_content != NULL)
{
while (text_content[len])
{
len++;
}
}
if (filename == NULL)
{
return (-1);
}
file = open(filename, O_WRONLY | O_APPEND);
w = write(file, text_content, len);
if (file == -1 || w == -1)
{
return (-1);
}
return (1);
}
