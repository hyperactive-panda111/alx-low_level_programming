#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates new dog
 * @name: name of struct
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to new struct
 */

dog_t *new_dog(char *name, float dog, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}

