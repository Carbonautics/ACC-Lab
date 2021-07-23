#include <stdio.h>

struct student
{
    char *name;
};
struct student s[2];
void main()
{
    printf("Hello C!!");
    //int a[2][3]={2,0,3,2,30,40};
    //printf("%d %d \n", *(*(a+0)+0), *(*(a+0)+2));
    s[0].name = "alan";
    s[1]=s[0];
    printf("%s%s", s[0].name, s[1].name);
}

