#include <stdio.h>
#include <stdlib.h>

struct product 
{
    float price;
    char name[30];
};


int main()
{
    struct product *pProducts;
    int i;
    int j;
    int numberOfProducts;

    printf("Enter the number of products to store: ");
    scanf("%d", &numberOfProducts);

    printf("num products %d\n", numberOfProducts);

    pProducts = (struct product *) malloc(numberOfProducts * 
                                          sizeof(struct product));

    for(i = 0; i < numberOfProducts; i++)
    {
        printf("Enter a Product Name: ");
        scanf("%s", (pProducts+i)->name);
        printf("Enter a Product Price: ");
        scanf("%f", &(pProducts+i)->price);
    }

    printf("Products Stored\n");

    for(j=0; j< numberOfProducts; j++)
    {
        printf("%s\t%.2f\n", (pProducts+j)->name, (pProducts+j)->price);
    }
    free(pProducts);
    
    return 0;
}
