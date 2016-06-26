#include <stdio.h>

void main()
{
    printf("\n");

    char sizeOf;

    do{
        
        printf("What size of shirt? (S, M, L): ");
        scanf(" %c", &sizeOf);

    }while(sizeOf != 'S' && sizeOf != 'M' && sizeOf != 'L');
}
