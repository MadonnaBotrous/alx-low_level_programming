#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returnining the length of the string
 * @s:the input string
 * Return:the length of the string
 */
int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * *_strcpy - copying the string pointed to by src
 * @dest:a pointer to the buffer
 * @src:the string to be copied
 * Return:the final pointer
 */
char *_strcpy(char *dest, char *src)
{
int len, i;

len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name:the name of the dog
 * @age:the age of the dog
 * @owner:the owner of the dog
 * Return:the pointer to the new dog if succ, Null it not
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;

len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
