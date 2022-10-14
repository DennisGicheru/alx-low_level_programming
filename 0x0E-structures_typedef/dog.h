#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Dogs information
 * @name: dog name
 * @age: dog age
 * @owner: owner's name
 *
 * Description: General information abaout a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_s;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
