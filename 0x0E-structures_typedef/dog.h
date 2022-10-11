#ifndef DOG_H
#define DOG_H
/**
 * struct dog - record for dog
 * @name: string data member
 * @age: data member
 * @owner: string data member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

