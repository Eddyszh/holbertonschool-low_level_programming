#ifndef dog_H
#define dog_H
/**
 * struct dog - contains the features of dog
 * @name: pointer to char
 * @age: float for the age
 * @owner: pointer to char
 *
 * Description: Has the name, age and owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* dog_H */
