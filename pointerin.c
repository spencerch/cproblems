#include <stdio.h>
#include <stdlib.h>

void main()
{
    int rand1 = 12;
    int rand2 = 15;
    int *pRand1 = &rand1;

    printf("rand1 = %p : rand2 = %p\n\n", &rand1, &rand2);

    printf("rand1 = %ld : rand2 = %ld\n\n", (long) &rand1, (long) &rand2);

    printf("Size of int %zu\n\n", sizeof(rand1));

    printf("Pointer %p\n\n", pRand1);

    printf("Pointer %ld\n\n", (long) pRand1);

    printf("Value %d\n\n", *pRand1);
    
}
