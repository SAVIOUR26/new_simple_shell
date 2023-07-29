#include "shell.h"

/**
 **_strncpy – this copies the string
 *@dest: this is the destination where string is to be copied 2
 *@src: this is the source of string
 *@n: number of characters to be copied
 *Return: a concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat – this concatenates two strings
 *@dest: first string
 *@src: second string
 *@n: the number of bytes 2 be maximally used
 *Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - this locates a character in a string
 *@s: this is the string to be parsed
 *@c: this is the character to look for
 *Return: (s) a pointer to memory area (s)
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

