#include <stdio.h>
#include <stdlib.h>

FILE *openFile(char *fname, char* mode)
{
    FILE *pFile = fopen(fname, mode);

    if(!pFile)
    {
        printf("Error: Couldn't open file %s in mode %s\n\n", fname, mode);
        return NULL;
    }

    return pFile;
}

int closeFile(FILE * pFile)
{
    if(fclose(pFile) != 0)
    {
        printf("Error: File not closed!\n\n");
        return 1;
    }
    return 0;
}

int readFile(char *fname)
{
    char buffer[1000];
    FILE *pFile = openFile(fname, "r");

    while(fscanf(pFile, "%s", buffer) == 1)
        puts(buffer);
    printf("Success reading from file\n\n");
    return closeFile(pFile);
}

int readFile2(char *fname)
{
    char buffer[1000];
    FILE *pFile = openFile(fname, "r");

    if(pFile == NULL)
        return 1;

    while(fgets(buffer, 1000, pFile) != NULL)
    {
        printf("%s", buffer);
    }
    printf("\n");
    printf("Success reading from file\n\n");
    return closeFile(pFile);
}
int writeRandomWordFile(char *fname)
{

    FILE *pFile = openFile(fname, "w+");
    char buffer[1000];

    if(pFile == NULL)
        return 1;

    fputs("Messing with strings", pFile);
    //SEEK_SET = set cursor n characters from start
    //SEEK_CUR = set cursor n characters from currrent
    //SEEK_END = set cursor n characters from end
    fseek(pFile, 12, SEEK_SET);
    fputs(" files  ", pFile);

    printf("Success writing to file\n\n");
    return closeFile(pFile);
}

int writeRandomNumFile(char *fname)
{
    int randomNumber;
    FILE *pFile = openFile(fname, "w+");
    char buffer[1000];

    if(pFile == NULL)
        return 1;

    for(int i = 0; i < 10; i++)
    {
        randomNumber = rand() % 100;
        fprintf(pFile, "%d\n", randomNumber);
    }
    printf("Success writing to file\n\n");
    return closeFile(pFile);
}

int main()
{

    char *fname = "randomnumbers.txt";
    if(writeRandomNumFile(fname))
        return -1;
    if(readFile(fname))
        return -1;
    fname = "randomwords.txt";
    if(writeRandomWordFile(fname))
        return -1;
    if(readFile2(fname))
        return -1;
    return 0;
}
