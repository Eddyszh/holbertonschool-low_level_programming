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
void init_dog(struct dog *d, char *name, float age, char *owner);
