#include <stdio.h>
void main()
{
    int i, min, n, num1,num2,num3;
    printf("Enter the three numbers");
    scanf("%d %d %d", &num1, &num2, &num3);
    min = num1;
    if(num2 < min)
    {
        min = num2;
    }else if(num3 < min)
    {
        min = num3;
    }
    printf("The minimum of 3 numbers is: %d", min);
}
