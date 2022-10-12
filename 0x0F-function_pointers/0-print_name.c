#include "function_pointers.c"

/**
 * print_name - prints a name
 * @name: string
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

