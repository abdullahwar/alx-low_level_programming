#include <stdlib.h>
#include "dog.h"

/**

init_dog - initializes a struct dog variable
@d: pointer to the struct dog to be initialized
@name: the name to set
@age: the age to set
@owner: the owner to set
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}


