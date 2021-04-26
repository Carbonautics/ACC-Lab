#include <stdio.h>

void display_stock();

struct store_stock 
{
    int Item_Code;
    int Quantity;
    int Price;
};
struct cart
{
    int Cart_item_code;
    int Cart_Quantity;
};

void main()
{

}

void display_stock()
{
    printf("Item Code\t\tQuantity\t\tPrice\n");
    printf("%d\t\t\t%d\t\t\t%d\n, store_stock.Item_Code, store_stock.Quantity, store_stock.Price");
}