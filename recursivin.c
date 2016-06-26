#include <stdio.h>

typedef struct product
{
    const char *name;
    float price;
    struct product *next;
    
} product_t;

void printLinkedList(product_t * pProduct)
{
    while(pProduct != NULL)
    {
        printf("A %s costs $%.2f\n\n", pProduct->name, pProduct->price);
        pProduct = pProduct->next;
    }

}

void main()
{
    product_t tomato = {"Tomato", 0.51, NULL};
    product_t potato = {"Potato", 1.21, NULL};
    product_t lemon = {"Lemon", 1.69, NULL};
    product_t milk = {"Milk", 3.09, NULL};
    product_t turkey = {"Turkey", 1.86, NULL};

    tomato.next = &potato;
    potato.next = &lemon;
    lemon.next = &milk;
    milk.next = &turkey;

    product_t apple = {"Apple", 1.58, NULL};
    lemon.next = &apple;
    apple.next = &milk;

    printLinkedList(&tomato);
    
}
