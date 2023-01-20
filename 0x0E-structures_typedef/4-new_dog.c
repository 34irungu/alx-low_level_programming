#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;

		d = malloc(sizeof(dog_t));

		if (d == NULL)
			return (NULL);

		d->name = malloc(sizeof(char) * name_l);

		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}

		d->owner = malloc(sizeof(char) * own_l);

		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}

		d->name = _strcpy(d->name, name);
		d->owner = _strcpy(d->owner, owner);
		d->age = age;
	}
	return (d);
}
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

