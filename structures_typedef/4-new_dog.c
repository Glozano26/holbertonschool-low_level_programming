#include<string.h>
#include<stdlib.h>
#include"dog.h"
/**
 *new_dog- prototype
 *@name: dog name.
 *@age: dog age.
 *@owner: dog owner.
 *Return: if its ok return d, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog2;

	new_dog2 = malloc(sizeof(dog_t));
	if (new_dog2 == NULL)
		return (NULL);

	new_dog2->name = malloc(strlen(name) + 1);
	strcpy(new_dog2->name, name);
    	
	new_dog2->age = age;
	new_dog2->owner = malloc(strlen(owner) + 1);
	strcpy(new_dog2->owner, owner);
	free(new_dog2->name);
	free(new_dog2->owner);
	free(new_dog2);

	return (new_dog2);
}
