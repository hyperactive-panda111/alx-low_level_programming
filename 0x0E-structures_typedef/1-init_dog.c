#include "main.h"
#include <stdlib>
/**
 * init_dog - function to initialize struct
 * @d: pointer to struct
 * @name: string
 * @age: float data member
 * @owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

