#include <stdio.h>
void main()
{
    int i, min = 0, n, x = 0;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(i == 0)
        {
            min = x;
        }
        if(x < min)
        {
            min = x;
        }
    }
    printf("The minimum of %d numbers is: %d", n,min);
}
