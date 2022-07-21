#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - dog structure
 * @name: the dog name
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This is the structure
 * of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* dog_t - typedef for dog*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
