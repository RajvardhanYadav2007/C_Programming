
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define PCnt 3

struct Product
{
    int P_ID;
    char P_Name[24];
    float P_Price;
    float P_S_Price;
};
int main()
{
    struct Product ProdList[PCnt];
    int i = 0;

    for( i = 0; i < PCnt; i++)
    {
        printf("\n\n Enter Product No %d Details \n ",i+1);

        printf("\n Enter Product ID                   =");
        scanf("%d",&ProdList[i].P_ID);

        fflush(stdin);

        printf("\n Enter Product Name                 =");
        gets(ProdList[i].P_Name);

        printf("\n Enter Product Packing Price        =");
        scanf("%f",&ProdList[i].P_Price);

        printf("\n Enter Product Market Selling Price =");
        scanf("%f",&ProdList[i].P_S_Price);
        printf("\n-----------------------------------------------\n");

    }
    system("cls");
    for( i = 0; i < PCnt; i++)
    {
                printf("\n\n Product No %d Details \n ",i+1);
                printf("\n Product ID is                         = %d",ProdList[i].P_ID);
                printf("\n Product Name is                       = %s",ProdList[i].P_Name);
                printf("\n Product  is Packing Price             = %2.2f",ProdList[i].P_Price);
                printf("\n Product ID is Market Selling Price    = %2.2f",ProdList[i].P_S_Price);
                printf("\n _______________________________*****_______________________________");
    }
    getch();
    return 0;
}
