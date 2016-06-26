
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    printf("\n");

    char wholeName[15] = "Spencer Hardin";
    char city[7] = {'C', 'h', 'i', '\0'};
    char thirdCity[] = "Paris";
    char yourCity[30];

    int primeNumbers[3] = {2, 3, 5};
    int morePrimes[] = {13, 17, 19, 23};
    int i;

    printf("The First Prime in the List is %d\n\n", primeNumbers[0]);

    printf("What city do you live in? ");
    fgets(yourCity, 30, stdin);

    printf("Hello %s\n\n", yourCity);

    for(i=0; i < 30; i++)
    {
        if(yourCity[i] == '\n')
        {
            yourCity[i] = '\0';
            break;
        }
    }
    printf("Hello %s\n\n", yourCity);

    printf("Is your city Paris? %d\n\n", strcmp(yourCity, thirdCity));

    char yourState[] = ", Texas";
    strcat(yourCity, yourState);
    printf("You live in %s\n\n", yourCity);

    //strlen
    printf("Letters in Paris: %zu\n\n", strlen(thirdCity));

    //strncpy
    strncpy(yourCity, "El Peublo del lo Reina de Los Angeles",
            sizeof(yourCity));
    printf("New City is %s\n\n", yourCity);

}
