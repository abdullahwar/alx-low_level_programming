#include <stdlib.h>
#include "dog.h"

/**

free_dog - deallocates memory reserved for a struct dog
@d: the struct dog to release memory for
*/void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

