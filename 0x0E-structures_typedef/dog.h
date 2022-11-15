#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attributes
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: the age of the dog
 *
 * Description: The attributes of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
