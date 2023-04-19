/**
* exit_sh - After freeing allocated resources exits
*	the shell
* @line: A string representing the input from the user.
*/

void exit_sh(char *line)
{
	free(line);
	print_str("\n", 1);
	exit(1);
}
