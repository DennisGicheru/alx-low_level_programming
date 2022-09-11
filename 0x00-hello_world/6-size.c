#include <stdio.h>
/**
 *  * main- entry point
 *   *
 *    * Return: always 0 (success)
*/


int main(void)
{
	char a_character;
	int a_integer;
	long a_long;
	long long a_longlong;
	float a_float;

	printf("Size of a char: %lu byte(s)\n", sizeof(a_character));
	printf("Size of an int: %lu byte(s)\n", sizeof(a_integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(a_long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(a_longlong));
	printf("Size of a float: %lu byte(s)\n", sizeof(a_float));
	return (0);
}
