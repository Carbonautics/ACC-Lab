#include <stdio.h>

void main()
{
    int x,i,n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n%2 == 0)
    {
        printf("The number %d is even.", n);
    }else if(n%2 != 0)
    {
        printf("The number %d is odd.", n);
    }
}
