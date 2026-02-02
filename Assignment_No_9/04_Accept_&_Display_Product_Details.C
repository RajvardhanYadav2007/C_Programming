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

    printf("\n Enter The All Product Details =>\n ");

    printf("\n Enter Product ID : \n ");
    scanf("%d",&Prod.P_ID);

    fflush(stdin);

    printf("\n Enter Product Name : \n ");
    gets(Prod.P_Name);

    printf("\n Enter Product Packing Price : \n ");
    scanf("%f",&Prod.P_Price);

    printf("\n Enter Product Selling Price : \n ");
    scanf("%f",&Prod.P_S_Price);

    system("cls");

    printf("\n  The Product Name is = %s",Prod.P_Name);

    printf("\n  The Product ID is = %d",Prod.P_ID);

    printf("\n  The Product Packing Price is = %3.2f",Prod.P_Price);

    printf("\n  The Product Selling Price is = %3.2f",Prod.P_S_Price);

    getch();
    return 0;

}



