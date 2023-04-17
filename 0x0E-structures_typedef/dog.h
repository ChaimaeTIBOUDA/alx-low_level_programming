#ifndef _HEADER
#define _HEADER
/**
 * struct dog - structure
 * @name: name of the dog
 * @age: it's age
 * @owner: its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
