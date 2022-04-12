#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
