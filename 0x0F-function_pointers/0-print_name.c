#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * @f: callback function
 * Description: function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);		
}
