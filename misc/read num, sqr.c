#include <stdio.h>

int getNum(void);
int sqr(int x);
void printOne(int p);

void main()
{
    printOne(sqr(getNum()));
}

int getNum()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return(n);
}

int sqr(int x)
{
    return(x*x);
}

void printOne(int p)
{
    printf("The square of the number is: %d", p);
}
