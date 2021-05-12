#include <stdio.h>

typedef struct
{
    int Item_Code;
    int Quantity;
    int Price;
}store_stock;
//Set code, quantity and price of each item
store_stock i1 = {1, 12, 100};
store_stock i2 = {2, 15, 200};
store_stock i3 = {3, 17, 150};
store_stock i4 = {4, 25, 250};

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
void update_bill();
void delete_item();
void display_cart();


int itemNum = 0;
void main()
{
    int choice;
    display_stock();
    input:printf("Your choices: \n");
    printf("1. Add Item to Cart\t 2. Delete Item from Cart\t 3. Display Cart\t 4. Proceed to Checkout:\n");
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
                update_bill();
                goto input;
        case 4: printf("\nRedirecting you to Checkout Page......\n");
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
        switch(item_code)
        {
            case 1: Cart[itemNum].Cart_amount = (i1.Price * quant);
                    i1.Quantity -= quant;
                    break;
            case 2: Cart[itemNum].Cart_amount = (i2.Price * quant);
                    i2.Quantity -= quant;
                    break;
            case 3: Cart[itemNum].Cart_amount = (i3.Price * quant);
                    i3.Quantity -= quant;
                    break;
            case 4: Cart[itemNum].Cart_amount = (i4.Price * quant);
                    i4.Quantity -= quant;
                    break;
        }
        itemNum++;
        printf("%d units of item with Item Code: %d added successfully!\n\n", quant, item_code);
        display_cart();
        update_bill();
        return;
    }
}

void delete_item()
{
    printf("\nDeleting item: %d\n\n", itemNum);
    itemNum--;
    display_cart();
}

void update_bill()
{
    int i;
    int total = 0;
    printf("\n\nThere are %d items in your cart..\n",itemNum);
    for(i=0; i<itemNum; i++)
    {
        total += Cart[i].Cart_amount;
    }
    printf("*********Grand total of your Cart is: %d  **************** \n\n", total);
    return;
}

void display_cart() //Displays the current cart of the customer
{
    printf("$$$$$$$$$$ YOUR CART! $$$$$$$$$$$");
    printf("\nItem Code\t\tQuantity\t\tTotal Amount\n");
    for(int i = 0; i<itemNum; i++)
    {
        printf("%d\t\t\t%d\t\t\t%d\n", Cart[i].Cart_item_code, Cart[i].Cart_Quantity, Cart[i].Cart_amount);
    }
    return;
}
void display_stock() //Displays the current stocks in the store
{
    printf("########### CURRENT STOCK IN YOUR STORE! ###########");
    printf("\nItem Code\t\tQuantity\t\tPrice\n");
    printf("%d\t\t\t%d\t\t\t%d\n", i1.Item_Code, i1.Quantity, i1.Price);
    printf("%d\t\t\t%d\t\t\t%d\n", i2.Item_Code, i2.Quantity, i2.Price);
    printf("%d\t\t\t%d\t\t\t%d\n", i3.Item_Code, i3.Quantity, i3.Price);
    printf("%d\t\t\t%d\t\t\t%d\n", i4.Item_Code, i4.Quantity, i4.Price);
    return;
}