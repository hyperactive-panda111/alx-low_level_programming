#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/** 
 * print_dog - function to prints a struct dog
 * @d: pointer to struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		(d->name) ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %f\n", d->age);
		(d->owner) ? (printf("Owner: %s\n",d->owner)) : (printf("Owner: (nil)\n"));
	}
}

