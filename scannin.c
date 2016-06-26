#include <stdio.h>

#define MYNAME "Spencer Hardin"

int globalVar = 100;

void main()
{
    char firstName[30];
    char lastName[30];
    char middleInitial;
    int month;
    int day;
    int year;

    printf("What is your middle initial? ");
    scanf(" %c", &middleInitial);

    printf("Middle initial: %c\n\n", middleInitial);


    printf("What is your name? ");
    scanf(" %s %s", firstName, lastName);

    printf("Your name is %s %c %s\n\n", firstName, middleInitial, lastName);

    printf("what's your birthday? ");
    scanf(" %d/%d/%d", &month, &day, &year);
    printf("\n Birth Date %d/%d/%d\n\n", month, day, year);
    
}
