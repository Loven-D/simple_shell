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
	return (str_count);
}

/**
* display_string - Diplay a  string to the STDOUT one character at the time.
* @str:String to be display to the STDOUT
* @newLine:Prints a new line
*
* Description:	If the string is NULL, (null) will be printed
*		If integer is 0 a new line will be printed.
*		Otherwise a new line will not be printed.
*/

void display_string(char *str, int newLine)
{
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		write(STDOUT_FILENO, &str[i], 1);
		i++;
	}
	if (newLine == 0)
	{
		write(STDOUT_FILENO, "\n", 1);
	}
}
/**
* _write_char - Writes a character to stdout
* @c: Character that will be written to stdout
* Return: total characters  written.
*/
/*
int _write_char(char c)
{
	return (write(1, &c, 1));
}
*/
