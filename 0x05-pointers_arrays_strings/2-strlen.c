#include "main.h"
#include <stdio.h>

/**
 *_strlen - returns the length of a string
 *@s: pointer to sting character
 *Return: length of string.
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
s++;
len++;
}
return (len);
}
