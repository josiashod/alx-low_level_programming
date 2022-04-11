#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the dog information
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", (*d).age);
			printf("Age: (nil)\n");
		if ((*d).owner)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}
