
#include <stdio.h>
//#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void noMoreNewline(char *theString)
{
    char * isANewline;

    isANewline = strrchr(theString, '\n');


    if(isANewline)
    {
        *isANewline = '\0';
    }
}

void makeLowerCase(char * theString)
{
    int i = 0;
    
    while(theString[i])
    {
        theString[i] = tolower(theString[i]);
        i++;
    }
}
void main()
{
    char quit[10];

    while(strcmp(quit, "quit"))
    {
        printf("Enter 'quit' to quit: ");

        fgets(quit, 10, stdin);

        noMoreNewline(quit);

        makeLowerCase(quit);
    }

    printf("Thanks for entering %s!\n\n", quit);
}
