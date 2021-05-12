#include <stdio.h>

typedef struct
{
    int Item_Code;
    int Quantity;
    int Price;
}store_stock;
//Set code, quantity and price of each book
store_stock books[5] = {{1, 15, 100}, 
                            {2, 20, 200}, 
                            {3, 19, 275}, 
                            {4, 30, 575},
                            {5, 30, 480}
                        };
int books_array_length = sizeof(books)/sizeof(books[0]);
typedef struct
{
    int Cart_item_code;
    int Cart_Quantity;
    int Cart_amount;
}cart;

cart Cart[5];

//Declaring functions
void display_stock();
void add_item();
void billing_info();
void delete_item();
void display_cart();


int itemNum = 0;
char customer_name[25];
char *namePtr = customer_name;
void main()
{
    int choice;
    printf("Please Enter your name: ");
    scanf("%s", namePtr);
    printf("\n////////Welcome to Amaz0n St0re, %s\\\\\\\\\\\\\\\\\n", namePtr);
    display_stock();
    input:printf("###MENU: \n");
    printf("1. Add Item to Cart\n2. Delete Item from Cart\n3. Display Cart\n4. Display Billing Information\n5. Proceed to Checkout\n");
    printf("\nPlease enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: display_stock();
                add_item();
                goto input;
        case 2: delete_item();
                goto input;
        case 3: display_cart();
                goto input;
        case 4: billing_info();
                goto input;
        case 5: printf("\nRedirecting you to Payment Page......\n");
                printf("\n\nOrder is confirmed. Details have been sent to registered email!!\n\n");
                break;
        default: printf("Please enter a valid number (1 2 3 or 4): ");
                goto input;
    }
}

void add_item()
{
    int item_code = 0, quant=0;
    add_input:printf("\nEnter the Item Code and Quantity of items to add to your cart: ");
    scanf("%d %d", &item_code, &quant);
    if(item_code < 1 && item_code > 5)
    {
        printf("Please enter a valid Item Code!");
        goto add_input;
    }
    else
    {
        Cart[itemNum].Cart_item_code = item_code;
        Cart[itemNum].Cart_Quantity = quant;
        for(int i = 0; i < books_array_length; i++)
        {
            if(books[i].Item_Code == item_code)
            {
                Cart[itemNum].Cart_amount = (books[i].Price * quant);
                books[i].Quantity -= quant;
            }
        }
        itemNum++;
        printf("%d units of item with Item Code: %d added successfully!\n\n", quant, item_code);
        display_cart();
        return;
    }
}

void delete_item()
{
    int code;
    display_cart();
    printf("\nEnter Book Code to be deleted: ");
    scanf("%d", &code);
    for(int i = 0; i < books_array_length; i++)
    {
        if(Cart[i].Cart_item_code == code)
        {
            for(int j = i; j < sizeof(Cart)/sizeof(Cart[0]); j++)
            {
                Cart[j] = Cart[j+1];
            }
            break;
        }
    }
    itemNum--;
    display_cart();
}

void billing_info()
{
    int total = 0, choice = 0;
    printf("\n\nThere are %d items in your cart..\n",itemNum);
    for(int i = 0; i < itemNum; i++)
    {
        total += Cart[i].Cart_amount;
    }
    bill_input:printf("*********Grand total of your Cart is: %d  **************** \n\n", total);
    printf("Enter the Method of Payment:");
    printf("1. COD (Cash on Delivery)\n2. Debit/Credit Card\n3. Netbanking\n4. UPI/Amazon Pay\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("COD chosen..\n");
                break;
        case 2: printf("Card Payment chosen..\n");
                break;
        case 3: printf("Netbanking Chosen..\n");
                break;
        case 4: printf("UPI/Amazon Pay Chosen..\n");
                break;
        default: printf("Please enter valid choice: (1 2 3 or 4)\n");
                goto bill_input;
    }
    return;
}

void display_cart() //Displays the current cart of the customer
{
    printf("$$$$$$$$$$ YOUR CART! $$$$$$$$$$$");
    printf("\nBook Code\t\tQuantity\t\tTotal Amount\n");
    for(int i = 0; i<itemNum; i++)
    {
        printf("%d\t\t\t%d\t\t\t%d\n", Cart[i].Cart_item_code, Cart[i].Cart_Quantity, Cart[i].Cart_amount);
    }
    return;
}
void display_stock() //Displays the current stocks in the store
{
    printf("########### CURRENT STOCK IN YOUR STORE! ###########");
    printf("\nBook Code\t\tQuantity\t\tPrice\n");
    for(int i = 0; i < books_array_length; i++)
    {
        printf("%d\t\t\t %d\t\t\t %d\n\n", books[i].Item_Code, books[i].Quantity, books[i].Price);
    }
    return;
}