#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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

	d = malloc(sizeof(dog_t));
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	d->name = malloc(sizeof(char) * i + 1);
	d->owner = malloc(sizeof(char) * j + 1);
	if (d == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		d->name[k] = name[k];
	for (l = 0; l < j; l++)
		d->owner[l] = owner[l];
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
