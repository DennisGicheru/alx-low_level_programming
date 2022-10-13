#include <stdio.h>

/**
 * main - prints name of compilation file followed by new line
 *
 * Return: 0.
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
