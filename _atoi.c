#include "shell.h"

/**
 *If interactive - will returns true when the shell is in interactive mode
 * @info: for struct address
 *
 * Return: 1 if it is in interactive mode, else will return 0 
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim – will check if character is a delimeter
 * @c: is the char to be checked
 * @delim: is the delimeter string
 * Return: 1 if it’s true, else its false will return 0 
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha – this will check 4 alphabetic x-cter
 * @c: This is the character to be input
 * Return: will 1 if the character c is alphabetic, else returns 0 
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi – this will convert a string to an integer
 * @s: this is the string to be converted
 *Will Return: 0 if there is no numbers in the string, else converts number 
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

