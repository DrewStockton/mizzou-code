#include <stdio.h>
#include <string.h>

enum {MAMMAL, BIRD, REPTILE, FISH, AMPHIBIAN} AnimalType;

typedef struct {
    char name[30];
    AnimalType type;
    int age;
    char origin[30];
} Animal;

void printAnimalInfo(Animal animal)
{
    const char *animalNames[] = {"MAMMAL" , "BIRD" , "REPTILE" , "FISH" , "AMPHIBIAN"};
    
    printf("Name: %s \n", animal.name);
    printf("Type: %s\n", animalNames[animal.type]);
    printf("Age: %d\n", animal.age);
    printf("Origin: %s\n", animal.origin);
}

void addAnimal(Animal animals[], int *count,Animal newAnimal)
{
    animals[*count] = newAnimal;
    (*count)++;
}

void printAnimalsByType(Animal* animals, int count, enum AnimalType type)
{
    for (int i=0; i<count; i++)
    {
        if (*(animals+count).type == type)
        {
            printAnimalInfo(*(animals+count));
        }
    }
}

int main() {
    // Create an array of Animal structures (maximum 10 animals)
    Animal animals[10];
    int count = 0;

    // Initialize the array with the specific animals provided
    Animal leo = {"Leo", MAMMAL, 5, "Africa"};
    Animal polly = {"Polly", BIRD, 2, "Australia"};
    Animal slither = {"Slither", REPTILE, 4, "Brazil"};
    Animal nibbles = {"Nibbles", MAMMAL, 1, "Canada"};
    Animal splash = {"Splash", FISH, 3, "Japan"};

    // Add these animals to the zoo
    addAnimal(animals, &count, leo);
    addAnimal(animals, &count, polly);
    addAnimal(animals, &count, slither);
    addAnimal(animals, &count, nibbles);
    addAnimal(animals, &count, splash);

    // Print the details of each animal
    printf("All animals in the zoo:\n");
    for (int i = 0; i < count; i++) {
        printAnimalInfo(animals[i]);
    }

    // Print the animals filtered by a specific type (e.g., MAMMAL)
    printf("Animals of type Mammal:\n");
    printAnimalsByType(animals, count, MAMMAL);

    // Print animals of another type (e.g., BIRD)
    printf("Animals of type Bird:\n");
    printAnimalsByType(animals, count, BIRD);

    return 0;
}
