#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
/**
 * exit_with_error - function
 * @code: int
 * @format: pointer
 * @arg: pointer
 */
void exit_with_error(int code, const char *format, const char *arg)
{
dprintf(STDERR_FILENO, format, arg);
exit(code);
}
/**
 * main - function
 * @argc: int
 * @argv: pointer
 * Return: value
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
exit_with_error(97, "Usage: cp file_from file_to\n");
}
const char *file_from = argv[1];
const char *file_to = argv[2];
int fd_from;
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
exit_with_error(98, "Error: Can't read from file %s\n", file_from);
}
int fd_to;
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
exit_with_error(99, "Error: Can't write to file %s\n", file_to);
}
char buffer[1024];
ssize_t bytes_read;
while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
if (write(fd_to, buffer, bytes_read) == -1)
{
exit_with_error(99, "Error: Can't write to file %s\n", file_to);
}
}
if (bytes_read == -1)
{
exit_with_error(99, "Error: Can't write to file %s\n", file_to);
}
if (close(fd_from) == -1)
{
exit_with_error(100, "Error: Can't close fd %d\n", fd_from);
}
if (close(fd_to) == -1)
{
exit_with_error(100, "Error: Can't close fd %d\n", fd_to);
}
return (0);
}
