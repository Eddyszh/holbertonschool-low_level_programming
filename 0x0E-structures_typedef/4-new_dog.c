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
	char *n, *o;
	int i = 0, j = 0, k, l;

	d = malloc(sizeof(dog_t));
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	n = malloc(sizeof(char) * i + 1);
	o = malloc(sizeof(char) * j + 1);
	if (d == NULL || o == NULL || n == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		n[k] = name[k];
	for (l = 0; l < j; l++)
		o[l] = owner[l];
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
