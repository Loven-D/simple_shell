#include <unistd.h>

int _write(char c);

/**
* main - Entry Point to our program
* Return: always (0) on success
*/

int main(void)
{
	int num, i;

	num = 10;
	i = 0;

	while (i < num)
	{
		_write(i + '0');
		i++;
	}
	_write('\n');
	return (0);
}

/**
* _write - prints the character to STDOUT
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned
*/

int _write(char c)
{
	return (write(1, &c, 1));
}
