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
    struct Product ProdList[3];
    int i = 0;

        for( i = 0; i < 3; i++)
    {
        printf("\n\n Enter Product No %d Details\n",i+1);

        printf("\n Enter Product ID  = ");
        scanf("%d",&ProdList[i].P_ID);
        fflush(stdin);
        printf(" Enter Product Name  = ");
        gets(ProdList[i].P_Name);
        printf(" Enter Product Packing Price  = ");
        scanf("%f",&ProdList[i].P_Price);
        printf(" Enter Product Market Selling price  = ");
        scanf("%f",&ProdList[i].P_S_Price);
        printf("\n______________________________________\n");

    }
    system("cls");
        for( i = 0; i < 3; i++)
        {
            printf(" \n\n The Product No %d Detail",i+1);

            printf("\n Product ID is %d",ProdList[i].P_ID);
            printf("\n Product ID is %s",ProdList[i].P_Name);
            printf("\n Product ID is %2.2f",ProdList[i].P_Price);
            printf("\n Product ID is %2.2f",ProdList[i].P_S_Price);
            printf("\n ====================******====================");

    }
    getch();
    return 0;

}
