#include <stdio.h>
void main()
{
    double rad, area;
    double *ptrrad, *ptrarea;

    ptrrad = &rad;
    ptrarea = &area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", ptrrad);

    *ptrarea = (3.14 * (*ptrrad) * (*ptrrad));
    printf("\n\n The area of the circle is: %.2f", *ptrarea);
}
