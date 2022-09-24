#include "main.h"
/**
 *  * print_rev - prints a string in reverse.
 *   * @s: value extracted from main.
 *    * Return: no return
 */
void print_rev(char *s)
{
int len;

for (len = 0; s[len] != '\0'; len++)
{
}
for (len = len - 1; len >= 0; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
