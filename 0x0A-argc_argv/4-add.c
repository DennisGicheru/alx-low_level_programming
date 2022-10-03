#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num_checker - checks if a given char is number or not
 * @a: char to be checked
 * Return: 1, if its a number, else 0
 **/
int num_checker(char *a)
{
int i, num, len;

i = 0;
num = 0;
len = strlen(a);
while (i < len)
{
if (a[i] < '0' || a[i] > '9')
{
return (-1);
}
else
num = num * 10 + (a[i] - '0');
i++;
}
return (num);
}
