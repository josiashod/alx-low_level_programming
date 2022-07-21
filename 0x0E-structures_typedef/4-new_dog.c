#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: string whose length should be return
 *
 * Return: (int) the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}


/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Return: pointer of dog if success
 * NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	if (!name || !owner || age < 0)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (name[i])
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[i] = '\0';

	i = 0;
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	while (owner[i])
	{
		dog->owner[i] = owner[i];
		i++;
	}
	dog->owner[i] = '\0';
	dog->age = age;

	return (dog);
}
