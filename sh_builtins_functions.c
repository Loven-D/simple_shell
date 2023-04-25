#include "coco.h"

/**
* exit_sh - After freeing allocated resources exits
*	the shell
* @lineptr: A string representing the input from the user.
*/

void exit_sh(char *lineptr)
{
	free(lineptr);
	display_string("\n", 1);
	exit(1);
}
