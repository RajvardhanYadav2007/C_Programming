#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define Pcnt 3
struct Product
{
    int P_ID;
    char P_Name[24];
    float P_Price;
    float P_S_Price;
};
int main()
{
    struct Product Prodlist[3];
    int i = 0;

    for ( i = 0; i < Pcnt; i++)
    {
        printf("\n\n  Enter No %d Product Detail \n ",i+1);
        printf("\n Enter Product ID = ");
        scanf("%d",&Prodlist[i].P_ID);

        fflush(stdin);

        printf("\n Enter Product Name = ");
        gets(Prodlist[i].P_Name);

        printf("\n Enter Product Packing Price = ");
        scanf("%f",&Prodlist[i].P_Price);

        printf("\n Enter Product Market Selling price = ");
        scanf("%f",&Prodlist[i].P_S_Price);

    }

    system("cls");

    for ( i = 0; i < Pcnt; i++)
    {
        printf("\n  Enter Key For All product Details \n ",i+1);
        printf("Product ID = %d",Prodlist[i].P_ID);
        printf("Product Name = %s",Prodlist[i].P_Name);
        printf("Product Packing Price = %2.3f",Prodlist[i].P_Price);
        printf("Product Market Selling price = %2.3f",Prodlist[i].P_S_Price);
        printf("\n -----------**********-----------\n");
    }

    getch();
    return 0;

}
