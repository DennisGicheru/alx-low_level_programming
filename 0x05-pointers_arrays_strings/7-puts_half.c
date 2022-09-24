#include "main.h"
#include <stdio.h>
/**
 *puts_half - prints the second half of a string.
 *@str: pointer to string
 *Return: no return
 */
void puts_half(char *str)
{
int len = 0;
char *y = str;
int n;

while (*y != '\0')
{
y++;
len++;
}
if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len + 1) / 2;
}
for ( ; n < len ; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
