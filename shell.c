#include "coco.h"

/**
* main - Entry point to our application
* @argc: total num of args
* @argv: list of args
* Return: 0 (success)
*/

int main(int argc, char **argv)
{
	char *lineptr;
	size_t n;
	int cmdCount = 0;

	(void)argc;
	(void)argv;

	signal(SIGINT, SIG_IGN)
	do {
		lineptr = NULL;
		n = 0;
		cmdCount += 1;
		/*void _getline(char *lineptr, size_t n, int cmdCount, char **argv);*/
		_getline(lineptr, n, cmdCount, argv);
	} while (1);

	return (0);
}
