#include <stdio.h>

typedef union
{
    short individual;
    float pound;
    float ounce;
} amount;

typedef enum
{
    INDIV,
    OUNCE,
    POUND
} quantity;

typedef struct
{
    char *brand;
    quantity quantityType;
    amount theAmount;
} product_t;

void displayProduct(product_t *pProduct)
{
    switch(pProduct->quantityType)
    {
        case INDIV:
            printf("You bought %d oranges\n\n",
                   pProduct->theAmount.individual);
            break;
        case OUNCE:
            printf("You bought %.2f ounces of oranges\n\n",
                   pProduct->theAmount.ounce);
            break;
        default:
            printf("You bought %f pounds of oranges\n\n",
                    pProduct->theAmount.pound); 
            break;
    }
}

void main()
{
    product_t productOrdered = {"Chiquita",
                                .theAmount.pound = 16,
                                .quantityType=POUND};

    displayProduct(&productOrdered);

    typedef union
    {
        struct{
            unsigned char byte0;
            unsigned char byte1;
            unsigned char byte2;
            unsigned char byte3;
        } bytes;
        unsigned int dword;
    } reg_t;

    reg_t reg;
    reg.dword = 0xdeadbeef;
    printf("Register %x\n\n", reg.dword);

    reg.bytes.byte0 = 0x40;
    printf("Register %x\n\n", reg.dword);

}
