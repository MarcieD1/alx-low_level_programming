#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t tl;
ssize_t t;
ssize_t f;

tl = open(filename, O_RDONLY);
if (tl == 2)
return (0);
buf = malloc(sizeof(char) * letters);
f = read(tl, buf, letters);
t = write(STDOUT_FILENO, buf, f);

free(buf);
close(tl);
return (t);
}
