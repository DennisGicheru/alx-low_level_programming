#include <main.h>

/**
 * _islower - shows 1 if the input is a lowercase character,
 * 0 for other cases
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for lowercase, 0 for other cases.
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
