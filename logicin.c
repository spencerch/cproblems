#include <stdio.h>


void main()
{
    int custAge = 38; 
    char * legalAge = (custAge > 21) ? "true" : "false";
    int bobMissedDays = 8;
    int bobTotalSales = 24000;
    int bobNewCustomers = 32;
    int numOfProducts = 10;
    

    printf("\n");

    if(custAge > 21 && custAge < 35)
    {
        printf("They are welcome!\n\n");
    }
    else
    {
        printf("They are NOT welcome!\n\n");
    }

    printf("Is the customer of legal age? %s\n\n", legalAge);


    if( bobMissedDays < 10 && bobTotalSales > 30000 || bobNewCustomers > 30)
        printf("Bob gets a raise!\n\n");
    else
        printf("Bob doesn't get a raise\n\n");

    printf("I bought %s products\n\n", (numOfProducts > 1) ? "many" : "one");
}

