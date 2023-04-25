#include "coco.h"

/**
* interactive_sh - mimic of the command line
*		interpreter for UNIX systems
*
* Return: nothing (void)
*/

void interactive_sh(void)
{
	char *lineptr;
	/*size_t n = 0;*/
	/*ssize_t chars_read;*/

	do {
		write(STDOUT_FILENO, PROMPT, getStr_len(PROMPT));
		lineptr = _getline();
		
		write(STDOUT_FILENO, lineptr, getStr_len(lineptr));
		/*free(chars_read);*/
	} while (1);
	free(lineptr);
	
	
}
