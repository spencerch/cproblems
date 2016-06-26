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

void getCharInfo()
{
    char theChar;

    while((theChar = getchar()) != '\n')
    {
        printf("Letter or Number %d\n\n", isalnum(theChar));
        printf("Alphabetic Char %d\n\n", isalpha(theChar));
        printf("Standard blank %d\n\n", isblank(theChar));
        printf("Ctrl Char %d\n\n", iscntrl(theChar));
        printf("Number Char %d\n\n", isdigit(theChar));
        printf("Anything But Space %d\n\n", isgraph(theChar));
        printf("Lowercase %d\n\n", islower(theChar));
        printf("Uppercase %d\n\n", isupper(theChar));
        printf("Punctuation %d\n\n", ispunct(theChar));
        printf("Any Space %d\n\n", isspace(theChar));
    }
}

void main()
{
    getCharInfo();
}
