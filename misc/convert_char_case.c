#include <stdio.h>
void main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    if(isalpha(x))
    {
        if(x>=97 && x<= 122)
        {
            x = x-32;
        }else if(x>=65 && x <= 90)
        {
            x = x+32;
        }
    }
    printf("The converted character is: %c", x);
}
