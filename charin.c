
#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#include <ctype.h>

void main()
{

    char theChar;
    
    while((theChar = getchar()) != '~')
    {
        putchar(theChar);
    }
}
