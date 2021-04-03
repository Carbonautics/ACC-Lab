#include <stdio.h>
void display(float);
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

void main()
{
    float p,q, ans;
    unsigned char c;
    float *ptrf(float,float);

    printf("Enter the two numbers: ");
    scanf("%f %f", &p, &q);
    printf("Enter the operator: ");
    scanf("%c", &c);
    switch (c){
        case '+': ptrf = add;
                break;
        case '-': ptrf = subtract;
                break;
        case '*': ptrf = multiply;
                break;
        case '/': ptrf = divide;
                break;
        default: ptrf = add;
                break;
    }
    ans = ptrf(p,q);
    display(ans);
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

void display(float s)
{
    printf("The answer is: %.2f", s);
}
