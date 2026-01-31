
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Product
{
    int P_Id;
    char P_Name[24];
    float P_Price;
    float P_Sell_P;
};
int main()
{
    struct Product Prod = {23, "Maggie masala",9.66,10.00 };

    printf("\n Display Product Detail => \n ");

    printf("\n  The Product Name       = %s",Prod.P_Name);
    printf("\n  The Product ID         = %d",Prod.P_Id);
    printf("\n  The Product Price      = %2.2f",Prod.P_Price);
    printf("\n  The Product Sell Price = %2.2f",Prod.P_Sell_P);

    getch();
    return 0;
}
