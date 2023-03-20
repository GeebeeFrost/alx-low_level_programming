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
typedef struct dog dog_t;
void init_dog(struct dog*, char *, float, char *);
void print_dog(struct dog *);
void print_dog_name(char *);
void print_dog_age(float);
void print_dog_owner(char *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif /* DOG */
