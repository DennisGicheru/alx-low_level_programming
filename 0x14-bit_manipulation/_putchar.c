#include <unistd.h>

/**
* _putchar - writes c to stdout
*@c: char to print
*
*Return: 1 on success or -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

