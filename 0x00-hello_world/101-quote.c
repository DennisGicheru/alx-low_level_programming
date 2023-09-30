#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
*  *main- entry point
* prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19"
* and then a new line and returns to the stderr"
* *Return: always 0 (success)
*/

#define TEXT "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

int main(void)
{
int len = strlen(TEXT);
write(1, TEXT, len);

return (0);
}
