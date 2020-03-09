#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: pointer to char
 * @age: float for dog's age
 * @owner: pointer to char
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = 0, j = 0, k, l;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	d = malloc(sizeof(dog_t));
	d->name = malloc(sizeof(char) * i + 1);
	d->owner = malloc(sizeof(char) * j + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
	}
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (k = 0; k < i + 1; k++)
		d->name[k] = name[k];
	for (l = 0; l < j + 1; l++)
		d->owner[l] = owner[l];
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
