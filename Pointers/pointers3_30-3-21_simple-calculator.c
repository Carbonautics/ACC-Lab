#include <stdio.h>
void main()
{
    int a, b, add,sub,prod;
    float div;
    int *ptrA, *ptrB, *ptrAdd, *ptrSub, *ptrProd;
    float *ptrDiv;
    ptrA = &a;
    ptrB = &b;
    ptrAdd = &add;
    ptrSub = &sub;
    ptrProd = &prod;
    ptrDiv = &div;

    printf("Enter the two numbers: ");
    scanf("%d %d", ptrA, ptrB);
    *ptrAdd = *ptrA + *ptrB;
    *ptrSub = *ptrA - *ptrB;
    *ptrProd = *ptrA * *ptrB;
    *ptrDiv = *ptrA / *ptrB;
    printf("\n\nSum = %d", *ptrAdd);
    printf("\nSubtraction = %d", *ptrSub);
    printf("\nProduct = %d", *ptrProd);
    printf("\nDivision = %.2f\n\n", *ptrDiv);
}
