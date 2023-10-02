#include "main.h"
#include <stdio.h>

/**
 * read_textfile - function
 * @filename: pointer
 * @letters: char
 * Return: w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *b;
ssize_t file;
ssize_t r;
ssize_t w;

file = open(filename, O_RDONLY);
if (file == -1)
return (0);

b = malloc(sizeof(char) * letters);
r = read(file, b, letters);
w = write(STDOUT_FILENO, b, r);

free(b);
close(file);
return (w);
}
