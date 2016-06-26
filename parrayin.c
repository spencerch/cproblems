
#include <stdio.h>
#include <stdlib.h>

void generateTwoRandomNums(int *rand1, int *rand2)
{
    *rand1 = rand() % 50 + 1;
    *rand2 = rand() % 50 + 1;

    printf("New rand1 in function = %d\n\n", *rand1);
    printf("New rand2 in function = %d\n\n", *rand2);
}

void editMessageSent(char *message, int size)
{
    char newMessage[] = "New message";

    if(size > sizeof(newMessage))
    {
        for(int i = 0; i < sizeof(newMessage); i++)
            message[i] = newMessage[i];
    }
    else
    {
        printf("New message is too big\n\n");
    }

}

void main()
{
    int primeNumbers[] = {2, 3, 5, 7};

    printf("First index : %d\n\n", primeNumbers[1]);
    printf("First index : %d\n\n", *(primeNumbers+1));


    char *students[4] = {"Sally", "Mork", "Paul", "Sue"};

    for(int i = 0; i < 4; i++)
    {
        printf("%s : 0x%lx\n\n", students[i], (long)&students[i]);      
    }

    int rand1 = 0;
    int rand2 = 0;

    generateTwoRandomNums(&rand1, &rand2);

    printf("rand1 = %d\n\n", rand1);
    printf("rand2 = %d\n\n", rand2);

    char randomMessage[] = "Edit my message";
    printf("Random Message: %s \n\n", randomMessage);
    editMessageSent(randomMessage, sizeof(randomMessage));
    printf("New Message: %s \n\n", randomMessage);

}
