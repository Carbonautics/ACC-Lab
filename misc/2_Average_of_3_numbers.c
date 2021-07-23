#include <stdio.h>

void main()
{
    int num1, num2, num3, total, avg;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    total = num1+num2+num3;
    avg = total / 3;
    printf("The average of 3 numbers is: %d", avg);
}
