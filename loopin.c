
#include <stdio.h>

void main()
{
    printf("\n");

    //Required if not using -std=c99
    //int counter;

    for(int counter = 0; counter <= 40; counter++)
    {
        if((counter % 2) == 0) 
            continue;
        printf("%d ", counter);
    }
    printf("\n\n");
}
