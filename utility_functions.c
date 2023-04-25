#include "coco.h"

/**
* _getline - Reads an entire line from STDIN
*	& pasrses commands and arguments
* @lineptr: A pointer to the buffer address
* @n: Number of size in bytes
* @cmdCount: Track total command entered
* @argv: Program name
*/

void _getline(char *lineptr, size_t n, int cmdCount, char **argv)
{
	/*char **arr_of_args;*/
	size_t numOfCharsRead;
	/*int count, numOfToken;
	numOfToken = 0;*/
	write(STDOUT_FILENO, PROMPT, getStr_len(PROMPT));
	numOfCharsRead = getline(&lineptr, &n, stdin);

	if (numOfCharsRead == check) /* check if we've reached EOF/Error*/
	{
		exit_sh(lineptr);
	}
	/*
	else
	{
		arr_of_args = t_interface(lineptr, delim, numOfToken);
		if (arr_of_args[0] == NULL)
		{
			
		}
	}*/
}

