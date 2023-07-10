#include <stdio.h>
#include "main.h"
/**
 * create_file - that funcation create a file
 * @filename: filename
 * @text_content: text_content
 */
int create_file(const char *filename, char *text_content)
{
int fp;
int wr;
int len = 0;
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
fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(fp, text_content, len);
if (fp == -1 || wr == -1)
{
return (-1);
}
close(fp);
return (1);
}
