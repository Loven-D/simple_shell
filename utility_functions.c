#include "coco.h"

/**
* getStr_len - Return the length of a string
* @str: a pointer to the string whose length
*	is to be caculated.
*
* Return: length of string if successful, otherwise 0
*/

int getStr_len(char *str)
{
	int str_count;

	str_count = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (*str != '\0')
	{
		str++;
		str_count++;
	}
}


/**
* _getline - Reads an entire line from STDIN
* Return: Number of characters read on success
*/

ssize_t _getline(void)
{
	char *lineptr = NULL;
	ssize_t n, chars_read;

	n = 0;

	chars_read = getline(&lineptr, &n, stdin);

	if (chars_read == -1) /* we've reached end of the file/it fails*/
	{
		exit_sh(lineptr);
	}
	else
	{
		write(STDOUT_FILENO, ERROR, getStr_len(ERROR);
		exit_sh(lineptr);
	}
	return (lineptr);
}
