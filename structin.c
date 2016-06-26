#include <stdio.h>

typedef struct dogsFav
{
    char *food;
    char *friend;

} dogsFav_t;


typedef struct dog
{
    const char *name;
    const char *breed;
    int avgHeightCm;
    int avgWeightLbs;
    dogsFav_t favoriteThings;

} dog_t;

void setDogWeight(dog_t *theDog, int newWeight)
{
    theDog->avgWeightLbs = newWeight;
    printf("The weight was changed to %d\n\n", theDog->avgWeightLbs);
}

void getDogInfo(dog_t theDog)
{
    printf("Name: %s\n", theDog.name);
    printf("Breed: %s\n", theDog.breed);
    printf("Avg Height: %d\n", theDog.avgHeightCm);
    printf("Avg Weight: %d\n", theDog.avgWeightLbs);
}

void getMemoryLocations(dog_t theDog)
{
    printf("Name Location: 0x%lx\n", (long) theDog.name);
    printf("Breed Location: 0x%lx\n", (long)  theDog.breed);
    printf("Height Location: 0x%lx\n", (long) &theDog.avgHeightCm);
    printf("Weight Location: 0x%lx\n", (long) &theDog.avgWeightLbs);
    
}

void getDogsFavs(dog_t theDog)
{
    printf("\n");
    printf("%s loves %s and his friend is %s.\n\n",
           theDog.name,
           theDog.favoriteThings.food,
           theDog.favoriteThings.friend);
}

void main()
{
    dog_t cujo = {"Cujo", "Saint Bernard", 90, 264, {"Flesh", "Satan"}};

    printf("\n");
    getDogInfo(cujo);
    printf("\n");

    dog_t cujo2 = cujo;

    getMemoryLocations(cujo);
    getMemoryLocations(cujo2);

    dog_t benji = {"Benji", "Silky Terrier", 25, 9, {"Meat", "Joe Camp"}};
    
    getDogsFavs(benji);
    setDogWeight(&benji, 11);

    printf("The weight in main %d\n\n", benji.avgWeightLbs);
    
    
}
