#include "dog.h"
#include <stdio.h>

/**
* init_dog - function that initialise the variable of struct dog
* @d: struct to be called
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: Nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
