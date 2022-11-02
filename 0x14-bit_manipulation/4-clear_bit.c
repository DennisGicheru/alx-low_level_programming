#include "main.h"

/**
*clear_bit - sets value of a bit to 0
*@n: integer
*@index: index that will be changed to zero
*
*Return: 1 at success and -1 if error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
