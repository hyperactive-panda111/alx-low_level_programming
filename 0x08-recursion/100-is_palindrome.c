#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{

	if (*s)
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}

/**
 * _checker - checks if string is a palindrome
 * @str: string
 * @size: size of string
 * @i: counter
 * Return: 1 if string is palindrome, else 0.
 */

int _checker(char *str, int size, int i)
{
	if (i >= size)
		return (1);
	if (str[size] == str[i])
		return (_checker(str, size - 1, i + 1));

	return (0);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);
	int y = 0;

	return (_checker(s, len - 1, y));
}


