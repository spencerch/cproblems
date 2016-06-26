
#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#include <ctype.h>

void main()
{
    char name[50];

    printf("What is your name? ");

    //gets(name);

    //puts("Hi");
    //puts(name);
    fgets(name, 50, stdin);
    fputs("Hi ", stdout);
    fputs(name, stdout);
}
