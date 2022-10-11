#ifndef MAIN_H
#define MAIN_H
/**
 * init_dog - function to initialize struct
 * @d: pointer to struct
 * @name: string
 * @age: float data member
 * @owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (1);

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

