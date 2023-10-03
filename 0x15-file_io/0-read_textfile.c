#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

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
ssize_t hj;
ssize_t w;
ssize_t t;

hj = open(filename, O_RDONLY);
if (hj == 2)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(hj, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);
close(hj);
return (w);
}
