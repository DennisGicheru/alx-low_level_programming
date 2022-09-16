#include "main.h"
#include <stdio.h>

/**
* print_alphabet - print the alphabet in lowercase
*
* return : void
*/


void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
