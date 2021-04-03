#include <stdio.h>
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

void main()
{
    float p,q, sum,product,sub,div;
    printf("Enter the two numbers: ");
    scanf("%f %f", &p, &q);
    sum = add(p,q);
    printf("\n%.4f + %.4f = %.4f\n", p,q,sum);
    sub = subtract(p,q);
    printf("\n%.4f - %.4f = %.4f\n", p,q,sub);
    product = multiply(p,q);
    printf("\n%.4f * %.4f = %.4f\n", p,q,product);
    div = divide(p,q);
    printf("\n%.4f / %.4f = %.4f\n", p,q,div);
}

float add(float a, float b)
{
    float sum = 0;
    sum = a + b;
    return(sum);
}

float subtract(float b, float a)
{
    float sub = 0;
    sub = b - a;
    return(sub);
}

float multiply(float a, float b)
{
    float prod = 0;
    prod = a * b;
    return(prod);
}

float divide(float b, float a)
{
    float div = 0;
    div = (float)b/a;
    return(div);
}
