
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
    struct Product Prod1,Prod2,Prod3;

    printf("\n Enter The 1st Product Details =>\n ");

    printf("\n Enter Product ID : \n ");
    scanf("%d",&Prod1.P_ID);

    fflush(stdin);

    printf("\n Enter Product Name : \n ");
    gets(Prod1.P_Name);

    printf("\n Enter Product Packing Price : \n ");
    scanf("%f",&Prod1.P_Price);

    printf("\n Enter Product Selling Price : \n ");
    scanf("%f",&Prod1.P_S_Price);


    printf("\n\n Enter The 2nd Product Details =>\n ");

    printf("\n Enter Product ID : \n ");
    scanf("%d",&Prod2.P_ID);

    fflush(stdin);

    printf("\n Enter Product Name : \n ");
    gets(Prod2.P_Name);

    printf("\n Enter Product Packing Price : \n ");
    scanf("%f",&Prod2.P_Price);

    printf("\n Enter Product Selling Price : \n ");
    scanf("%f",&Prod2.P_S_Price);


    printf("\n\n Enter The 3rd Product Details =>\n ");

    printf("\n Enter Product ID : \n ");
    scanf("%d",&Prod3.P_ID);

    fflush(stdin);

    printf("\n Enter Product Name : \n ");
    gets(Prod3.P_Name);

    printf("\n Enter Product Packing Price : \n ");
    scanf("%f",&Prod3.P_Price);

    printf("\n Enter Product Selling Price : \n ");
    scanf("%f",&Prod3.P_S_Price);

    system("cls");


    printf(" \n\n THE 1st PRODUCT DETAILS =>");

    printf("\n  The Product Name is = %s",Prod1.P_Name);

    printf("\n  The Product ID is = %d",Prod1.P_ID);

    printf("\n  The Product Packing Price is = %3.2f",Prod1.P_Price);

    printf(" The Product Selling Price is = %3.2f",Prod1.P_S_Price);


    printf(" \n\n THE 2nd PRODUCT DETAILS =>");

    printf("\n  The Product Name is = %s",Prod2.P_Name);

    printf("\n  The Product ID is = %d",Prod2.P_ID);

    printf("\n  The Product Packing Price is = %3.2f",Prod2.P_Price);

    printf(" The Product Selling Price is = %3.2f",Prod2.P_S_Price);


    printf(" \n\n THE 3rd PRODUCT DETAILS =>");

    printf("\n  The Product Name is = %s",Prod3.P_Name);

    printf("\n  The Product ID is = %d",Prod3.P_ID);

    printf("\n  The Product Packing Price is = %3.2f",Prod3.P_Price);

    printf(" The Product Selling Price is = %3.2f",Prod3.P_S_Price);


    getch();
    return 0;

}



