#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age
 * @owner: owner of dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	dog1->name = malloc(sizeof(char) * (l1 + 1));
		if (dog1->name == NULL)
		{
			free(dog1);
			return (NULL);
		}
	dog1->owner = malloc(sizeof(char) * (l2 + 1));
		if (dog1->owner == NULL)
		{
			free(dog1);
			free(dog1->name);
			return (NULL);
		}
	dog1->name = _strcpy(dog1->name, name);
	dog1->owner = _strcpy(dog1->owner, owner);
	dog1->age = age;
	return (dog1);
}
/**
 * _strcpy - copy the string
 * @dest: where to copy
 * @src: string copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (src[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - return the lenght of string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

