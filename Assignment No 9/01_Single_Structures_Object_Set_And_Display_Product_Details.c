#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Product
{
    int P_ID;
    char P_Name[24];
    float P_Price;
    float P_S_Price;
};
int main()
{
    struct Product Prod;

    Prod.P_ID = 125;
    strcpy(Prod.P_Name,"Laptop Sag");
    Prod.P_Price = 1222.50;
    Prod.P_S_Price = 1300.66;

    printf("\n Display product Detail => \n ");

    printf("\n  The Product Name  = %s;",Prod.P_Name);
    printf("\n  The Product ID  = %d;",Prod.P_ID);
    printf("\n  The Product Price  = %4.2f;",Prod.P_Price);
    printf("\n  The Product Selling Price  = %4.2f;",Prod.P_S_Price);

    getch();
    return 0;
}




