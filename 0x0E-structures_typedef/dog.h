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
/**
 * dog_t - typedef for dog structure
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
