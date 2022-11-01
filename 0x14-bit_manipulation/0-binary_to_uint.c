#include "main.h"
#include <stddef.h>

/**
*binary_to_uint - converts  binry digit to unsigned integer
*@b: pointer
*
*Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	/*return 0 if value is NULL*/
	if (b == NULL)
		return (0);

	/*return if value is different from 1 or 0 */
	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	/*convert from binary to unsigned int*/
	for (i = 0; b[i] != '\0'; i++)
	{
		num *= 2;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
