#ifndef DOG
#define DOG

/**
 * struct dog - Dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog*, char *, float, char *);

#endif /* DOG */
