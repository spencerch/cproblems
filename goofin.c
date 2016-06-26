#include <stdio.h>
#include <string.h>

#define MYNAME "Spencer Hardin"

int globalVar = 100;

void main()
{
    char firstLetter = 'S';
    int age = 27;
    long int superBigNumber = -327670000;
    float piValue = 3.14159;
    double reallyBigPi = 3.141591415914159;
    char myName[] = "Spencer Hardin";
    strcpy(myName, "Bob Smith");
    printf("\n");
    printf("This will print to the screen\n\n");
    printf("I am %d years old\n\n", age);
    printf("Big number %ld\n\n", superBigNumber);
    printf("Pi = %.5f\n\n", piValue);
    printf("Big Pi = %.15f\n\n", reallyBigPi);
    printf("The first letter in my name is %c\n\n", firstLetter);
    printf("My name is %s\n\n", MYNAME);
    printf("My name is %s\n\n", myName);

    
}
