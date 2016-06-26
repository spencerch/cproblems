#include <stdio.h>

void main()
{
    printf("\n");
    printf("A char takes up %d bytes\n\n", sizeof(char));
    printf("A int takes up %d bytes\n\n", sizeof(int));
    printf("A long int takes up %d bytes\n\n", sizeof(long int));
    printf("A float takes up %d bytes\n\n", sizeof(float));
    printf("A double takes up %d bytes\n\n", sizeof(double));
    printf("A long takes up %d bytes\n\n", sizeof(long));

    int bigInt = 2147483648;
    printf("I'm bigger than you may have heard %d\n\n", bigInt);

    int numberHowBig = 0;

    printf("How many bits? ");
    scanf(" %d", &numberHowBig);
    printf("\n\n");

    //0: Print what is given
    //1: Print what is given
    //2: 1 + 2 = 3, 0b11
    //3: 3 + 4 = 7, 0b111
    //4: 7 + 8 = 15, 0b1111

    int myIncrementor = 1;
    long int myMultiplier = 1;
    long int finalValue = 1;

    while(myIncrementor < numberHowBig)
    {
        myMultiplier *= 2;
        finalValue += myMultiplier;
        myIncrementor++;
    }

    if((numberHowBig == 0) || (numberHowBig == 1))
    {
        printf("Top value %d\n\n", numberHowBig);
    }
    else
    {
        printf("Top value %ld\n\n", finalValue);
    }

}
