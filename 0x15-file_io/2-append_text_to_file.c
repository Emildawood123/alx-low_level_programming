#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - that funcation append text to file
 * @filename: name of the file
 * @text_content: textcontent
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fp;
int len;
int wr;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[len])
{
len++;
}
}
fp = open(filename, O_WRONLY | O_APPEND);
wr = write(fp, text_content, len);
if (wr == -1 || fp == -1)
{
return (-1);
}
close(fp);
return (1);
}

