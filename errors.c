#include "shell.h"

/**
 * _eputs – this prints the input string
 * @str: this is the string 2 be printed
 *
 * Return: doesn’t return anything
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar – this writes the character c to stderr
 * @c: This is the character 2 print
 *
 * Return: If successful 1.
 * On error, will retun -1, & errno set appropriately.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd – this writes the character c 2 given fd
 * @c: This is the character 2 print
 * @fd: This is filedescriptor 2 write 
 *
 * Return: On success 1.
 * On error, this will return -1, & errno  set appropriately.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd – this prints the input string
 * @str: this is string 2 be printed
 * @fd: this is filedescriptor 2 write 
 *
 * Return: how many chars numbers put
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}

