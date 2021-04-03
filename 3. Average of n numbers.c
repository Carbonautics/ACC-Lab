#include <stdio.h>
void main()
{
    int i, n, x=0, total,avg;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &x);
        total = total + x;
    }
    avg = total / n;
    printf("The average is: %d", avg);
}
