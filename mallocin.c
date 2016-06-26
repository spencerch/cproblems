#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amtToStore;
    
    printf("How many integers should we store?: ");
    scanf("%d", &amtToStore);

    int * pRandomNumbers;

    pRandomNumbers = (int *) malloc(amtToStore * sizeof(int));

    if(pRandomNumbers != NULL)
    {
        int i = 0;
        printf("Enter a number or quit: ");

        while(i < amtToStore && scanf("%d", &pRandomNumbers[i]) == 1)
        {
            printf("Enter a number or quit: ");
            i++;
        }
        
        printf("\nYou entered the following numbers\n");

        for(int j = 0; j < i; j++)
        {
            printf("%d\n", pRandomNumbers[j]);
        }
    }

    free(pRandomNumbers);
    return 0;
}
