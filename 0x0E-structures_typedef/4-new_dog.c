#include "dog.h"
#include <stdlib.h>


/**
 * _strlen - returns the length of a string
 * @s: string to be stored
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy a string from the source string
 * @pony_s: pointer to the buffer in which we will copy the string
 * @cpds1: string to copy
 * Return: copied string length
*/

char _strcpy(char *pony_s, char *cpds1)
{
	int i, len;
	len = 0;

	while (cpds1[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		pony_s[i] = cpds1[i];
	}
	pony_s[i] = '\0';
	return (*pony_s);
}

/**
 * *new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @*new_dog: the new dog object
 * Return: void (0) on success
*/



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);

	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
