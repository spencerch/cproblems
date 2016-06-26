#include <stdio.h>

void main()
{
    printf("\n");

    int secretNumber = 10;
    int numberGuessed = 0;

    while(1)
    {
        printf("Try to guess the secret number: ");
        scanf(" %d", &numberGuessed);
        if(numberGuessed == secretNumber)
        {
            printf("You got it!\n\n");
            break;
        }
    }
}
