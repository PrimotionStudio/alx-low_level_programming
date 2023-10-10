#ifndef POPPY
#define POPPY
/**
  * struct dog - dog structure
  * @name: arg
  * @age: arg
  * @owner: arg
  * Description: stuff about dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
