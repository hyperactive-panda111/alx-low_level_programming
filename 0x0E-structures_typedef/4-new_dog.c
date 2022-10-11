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

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i, iname, iowner;

	p = malloc(sizeof(*p));
	if (p == NULL || !(name) || !(owner))
	{
		free(p);
		return (NULL);
	}

	for (iname = 0; name[iname]; iname++)
		;

	for (iowner = 0; owner[iowner]; iowner++)
		;

	p->name = malloc(iname + 1);
	p->owner = malloc(iowner + 1);

	if (!(p->name) || !(p->owner))
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	for (i = 0; i < iname; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';

	for (i = 0; i < iowner; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';

	p->age = age;

	return (p);
}

