#include "coco.h"

/**
* interactive_sh - mimic of the command line
*		interpreter for UNIX systems
*
* Return: nothing (void)
*/

void interactive_sh(void)
{
	/*char *lineptr;
	size_t n;*/
	ssize_t chars_read;

	do
	{
		/*lineptr = NULL;
		n = 0;*/

		write(STDOUT_FILENO, PROMPT, getStr_len(PROMPT));
		/*_getline(&lineptr, &n, stdin);*/
	}	

}
