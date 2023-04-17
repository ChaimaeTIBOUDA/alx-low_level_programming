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
/**
 * dog_t - typedef
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
