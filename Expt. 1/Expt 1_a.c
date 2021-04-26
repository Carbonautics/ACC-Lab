#include <stdio.h>
//Function declarations
void display(float);
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

void main()
{
    float p,q, ans;
    char operator;

    //Take number inputs
    printf("Enter the two numbers: ");
    scanf("%f %f", &p, &q);
    
    //Take operator input (+, - , * , /)
    character_input:printf("Enter the operator: ");
    scanf(" %c", &operator);

    //Switch and call the function corresponding to the
    //character/operation input users provides and assign result to ans
    switch (operator){
        case '+': ans = add(p,q);
                break;
        case '-': ans = subtract(p,q);
                break;
        case '*': ans = multiply(p,q);
                break;
        case '/': ans = divide(p,q);
                break;
        default: printf("Please enter a valid operation: + - / or *\n\n");
                goto character_input;
    }
    //function to display the result
    display(ans);
}

//Function definitions
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
