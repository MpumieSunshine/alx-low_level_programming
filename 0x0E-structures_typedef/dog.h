fndef DOG_H_FILE
#define DOG_H_FILE

/**
 * struct dog - structure deinition of a dog.
 * @name: dog name
 * @age: The age of the dog
 * @owner: owner of the dog
 * /
 typedef struct dog
 {
 	char *name;
	float age;
	char *owner;
 };

 /**
  * dog_t - Typedef for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

