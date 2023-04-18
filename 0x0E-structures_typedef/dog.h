#ifndef DOG_H
#define DOG_H

/**
* struct dog - userdefined datatypt fo a dog
* @name: name of dog
* @age: dog age
* @owner: dog owner
*
* Description: dog details cartegories
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
