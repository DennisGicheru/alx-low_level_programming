#include "main.h"
#include <stdio.h>
/**
 *_strcpy - copies the string pointed to by src.
 *@dest: destination pointer.
 *@src: source pointer.
 *Return: no return
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;

while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
