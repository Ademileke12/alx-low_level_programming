#ifndef _DOGH_
#define _DOGH_

/**
* struct dog - a struct with three elements
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Description: Contains the details of Dog and its owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
