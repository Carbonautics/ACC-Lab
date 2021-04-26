#include <stdio.h>
void display(float);
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

void main()
{
    float p,q, ans;
    char operator;
    float (*ptrf)(float,float); //declaring the pointer to be assinged corresponding function

    //Take number inputs
    printf("Enter the two numbers: ");
    scanf("%f %f", &p, &q);
    
    //Take operator input (+, - , * , /)
    character_input:printf("Enter the operator: ");
    scanf(" %c", &operator);

    //Switch to the corresponding function depending on what character input users provides
    switch (operator){
        case '+': ptrf = add;
                break;
        case '-': ptrf = subtract;
                break;
        case '*': ptrf = multiply;
                break;
        case '/': ptrf = divide;
                break;
        default: printf("Please enter a valid operation: + - / or *\n\n");
                goto character_input;
    }

    //assign output to ans
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
    if(floorf(s) == s)
        printf("The answer is: %.0f", s);
    else 
        printf("The answer is: %.2f", s);
}
