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
void free_dog(dog_t *d);
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
#endif

