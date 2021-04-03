#include <stdio.h>
int isquare(int);
double fsquare(double);

void main()
{
    int(*fnp1)();
    double(*fnp2)();

    fnp1 = isquare;
    fnp2 = fsquare;

    int n,m;
    double x,y;
    n=2;
    x = 6.2;

    m = (*fnp1)(n);
    y = (*fnp2)(x);
    printf("\nm= %d", m);
    printf("\ny= %f", y);
}

int isquare(int p){
    return(p*p);
}
double fsquare(double q)
{
    return(q*q);
}
