#include <stdio.h>
void main()
{
    int i=3;
    int *j;

    j=&i;
    printf("\n1. Address of i = %u\n", &i);
    printf("\n2. Address of i= %u\n", j);
    printf("\n3. Address of j= %u\n", &j);
    printf("\n4. Value of i= %d\n", i);
    printf("\n5. Value of i= %d\n", *(&i));
}
