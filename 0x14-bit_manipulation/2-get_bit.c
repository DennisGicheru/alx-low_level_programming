#include "main.h"

/**
*get_bit - function that returns the value of a bit at a given index
*@n: integer
*@index: index to look for in the number
*Return: value of bit or -1 for error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
