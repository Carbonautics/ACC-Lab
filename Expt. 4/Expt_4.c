#include <stdio.h>

int main()
{
    int number,quantity;
    char name[20], choice;
    float price, total=0;
    FILE *file_ptr;
    file_ptr = fopen("output.dat", "w+");
    if(file_ptr == NULL)
    {
        printf("\nError while Opening file.. Recheck if the file exists and the path to the file!");
        return 0;
    }
    fprintf(file_ptr, "\n| Asset Code |\t\t\t Asset Name | Quantity |\t  Price  |\n");
    printf("$$$$$$$$$$$     Welcome to Carbonautics' Inventory Management Software      $$$$$$$$$$$");
    asset_entry:printf("\n\nEnter Asset Number: ");
    scanf(" %d", &number);
    printf("\nEnter Asset Name: ");
    scanf(" %s", name);
    printf("\nEnter Quantity being stored: ");
    scanf(" %d", &quantity);
    printf("\nEnter the Asset Price(1 unit): Rs.");
    scanf(" %f", &price);
    total += (price*quantity);
    fprintf(file_ptr, "\n|\t\t  %2d | %20s |  \t  %3d  |  Rs. %6.2f |\n", number, name, quantity, price);
    
    choice_input:printf("\nDo you want to add another entry? (y/n): ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case 'y': goto asset_entry;
                  break;
        case 'n': fprintf(file_ptr,"\n--------------------------------------------------------------");
                  fprintf(file_ptr,"\n| Total amount of all Holdings | \t\t\t   |  Rs.%6.2f  |", total);
                  fprintf(file_ptr,"\n--------------------------------------------------------------");
                  fclose(file_ptr);
                  return 0;
        default: printf("\nPlease enter a valid choice (y/n) for yes/no ");
                 goto choice_input;  
    }
    return 0;
}