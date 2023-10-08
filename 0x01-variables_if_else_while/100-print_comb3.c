#include <stdio.h>

/**
** main - Entry point
**
** Return: Always 0 (Success)
*/

int main(void)
{
int d;
int n;

for (d = '0'; d <= '9'; d++)
{
for (n = '0'; n <= '9'; n++)
{
if (d < n)
{
putchar(d);
putchar(n);
if (d != '8')
{
putchar (',');
putchar (' ');
}
}
}
}
putchar('\n');
return (0);
}
