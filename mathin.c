#include <stdio.h>

void main()
{
    int num1 = 12;
    int num2 = 15;
    int numAns;
    int randomNum = 1;
    int exNum = 1;
    float decimal1 = 1.2;
    float decimal2 = 1.5;
    float decimalAns;


    printf("Integer Calculation %d\n\n", num2 / num1);
    printf("Float Calculation %f\n\n", decimal1 / decimal2);
    printf("Modulus %d\n\n", num2 % num1);
    printf("Without paretheses %d\n\n", 3 + 6 * 10);
    printf("With paretheses %d\n\n", (3 + 6) * 10);
    printf("1 += 2: %d\n\n", randomNum += 2);
    printf("%d += 2: %d\n\n", randomNum, randomNum += 2);
    printf("++%d: %d\n\n", exNum, ++exNum);
    exNum = 1;
    printf("%d++: %d\n\n", exNum, exNum++);

}
