#include <stdio.h>
#include <stdbool.h>

void main()
{
    bool isANumber = 1;

    int number;
    int sumOfNumbers = 0;


    while(isANumber)
    {
        printf("Enter a number: ");
        isANumber = (scanf("%d", &number) == 1);
        if(isANumber)
            sumOfNumbers += number;
    }
    printf("The sum is %d\n\n", sumOfNumbers);


}
