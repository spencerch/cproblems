#include <stdio.h>


void main()
{
    int num1 = 1;
    int num2 = 2;

    printf("\n");
    printf("Is %d > %d? : %d\n\n", num1, num2, num1 > num2);


    if( num1 > num2 )
    {
        printf("%d is greater than %d\n\n", num1, num2);
    }
    else if ( num1 < num2 )
    {
        printf("%d is less than %d\n\n", num1, num2);
    }
    else
    {
        printf("%d is equal to %d\n\n", num1, num2);
    }


}
