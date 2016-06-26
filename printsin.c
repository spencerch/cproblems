
#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#include <ctype.h>

void main()
{
    char *randomString = "Just some random stuff";
    
    //while(*randomString)
    //{
    //    putchar(*randomString++);
    //}

    int i = 0;
    while(randomString[i] != '\0')
    {
        putchar(randomString[i++]);
    }
}

