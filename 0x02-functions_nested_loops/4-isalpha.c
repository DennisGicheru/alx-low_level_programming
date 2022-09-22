#include "main.h"

/**
 * _isalpha - returns 1 if the input is an alphabet. 0 for other cases.
 *
 * @c: ASCII character
 *
* Return: 1 if c is a letter, upercase or lowercase, 0 if not.
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
