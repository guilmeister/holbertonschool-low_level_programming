#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

/**
 * new_dog - initialized details of new dogs
 *
 * @name: name of dog
 * @age: how old the dog is
 * @owner: name of dog owner
 *
 * Return: doggy
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *doggy;

	if (name == NULL)
		return (NULL);

	if (owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = _strdup(name);
	if (name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->age = age;

	doggy->owner = _strdup(owner);
	if (owner == NULL)
	{
		free(name);
		free(doggy);
		return (NULL);
	}

	return (doggy);
}


#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a given string to an allocated memory
 *
 * @str: string to copy
 *
 * Return: string
 */

char *_strdup(char *str)
{

	int i;
	int n = 0;
	char *string;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		n++;

	string = (char *) malloc((n + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		string[i] = str[i];
	}

	string[i] = '\0';

	return (string);

}
