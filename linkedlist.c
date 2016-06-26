#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct product
{
    float price;
    char productName[30];
    struct product *next;
} product_t;

product_t *pFirstNode = NULL;
product_t *pLastNode = NULL;

void fillStruct(product_t *pProduct)
{
    printf("Enter product name: ");
    scanf("%s", (pProduct)->productName);
    printf("Enter product price: ");
    scanf("%f", &(pProduct)->price);
}

void createNewUserList()
{
    product_t *pNew = (product_t *) malloc(sizeof(product_t));
    pNew->next = NULL;
    fillStruct(pNew);
    pFirstNode = pLastNode = pNew;
}

void createNewList(char *name, float price)
{
    product_t *pNew = (product_t *) malloc(sizeof(product_t));
    pNew->next = NULL;
    strcpy(pNew->productName, name);
    pNew->price = price;
    pFirstNode = pLastNode = pNew;
}

void inputUserData()
{
    //Creating the first node
    if(pFirstNode == NULL)
    {
        createNewUserList();
    }
    else
    {
        product_t *pNew = (product_t *) malloc(sizeof(product_t));
        fillStruct(pNew);
        //Creating the second node 
        if(pFirstNode == pLastNode)
        {
            pFirstNode->next = pNew;
            pLastNode = pNew;
            pNew->next = NULL;
        }
        //Creating all other nodes
        else
        {
            pLastNode->next = pNew;
            pNew->next = NULL;
            pLastNode = pNew;
        }
    }
    
}

void inputData(char *name, float price)
{
    //Creating the first node
    if(pFirstNode == NULL)
    {
        createNewList(name, price);
    }
    else
    {
        product_t *pNew = (product_t *) malloc(sizeof(product_t));
        strcpy(pNew->productName, name);
        pNew->price = price;
        //Creating the second node 
        if(pFirstNode == pLastNode)
        {
            pFirstNode->next = pNew;
            pLastNode = pNew;
            pNew->next = NULL;
        }
        //Creating all other nodes
        else
        {
            pLastNode->next = pNew;
            pNew->next = NULL;
            pLastNode = pNew;
        }
    }
    
}

void outputData()
{
    
    product_t *pProducts = pFirstNode;

    printf("Products Entered\n\n");

    while(pProducts != NULL)
    {
        printf("%s costs %.2f\n\n", pProducts->productName, pProducts->price);
        pProducts = pProducts->next;
    }
}

product_t * searchForProduct(char *name)
{
    product_t *pProducts = pFirstNode;

    printf("Searching for product %s\n\n", (name));
    while(pProducts != NULL)
    {
        printf("Current Product Name: %s\n\n", pProducts->productName);
        if(strcmp(pProducts->productName, name) == 0)
            break;
        pProducts = pProducts->next;
    }
    return pProducts;
}

int removeProduct(char *name)
{
    product_t *pProducts = pFirstNode->next;
    product_t *prevNode = pFirstNode;

    printf("Searching for product %s\n\n", (name));
    if(strcmp(pFirstNode->productName, name) == 0)
    {
        pProducts = pFirstNode;
        pFirstNode = pFirstNode->next;
        free(pProducts);
        return 1;
    }
    else
    {
        while(pProducts != NULL)
        {
            printf("Current Product Name: %s\n\n", pProducts->productName);
            if(strcmp(pProducts->productName, name) == 0)
            {
                printf("PRODUCT FOUND! REMOVING PRODUCT\n\n");
                prevNode->next = pProducts->next;
                free(pProducts);
                return 1;
            }
            prevNode = pProducts;
            pProducts = pProducts->next;
        }
    }
    return 0;
}


void main()
{
    char productName[30];
    product_t *pProduct;
    inputData("apple", 1.34);
    inputData("banana", 0.47);
    inputData("bread", 3.49);
    inputData("cheese", 1.96);
    outputData();

    printf("Enter product name to search for: ");
    scanf("%s", productName); 
    pProduct = searchForProduct(productName);
    if(pProduct)
        printf("PRODUCT FOUND!\n\n");
    else
        printf("PRODUCT NOT FOUND :<\n\n");

    printf("Enter product name to remove: ");
    scanf("%s", productName); 
    
    if(removeProduct(productName))
        printf("REMOVAL SUCCESSFUL\n\n");
    else
        printf("NO SUCH PRODUCT FOUND\n\n");
    outputData();

    
}
