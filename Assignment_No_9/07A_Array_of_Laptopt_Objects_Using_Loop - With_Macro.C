
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define CPnt 3

struct Laptop
{
    char L_Model_N[20];
    int L_Gen;
    char RAM[20];
    int SSD;
    float Update_Y;
};
int main()
{
    struct Laptop LapList[CPnt];
    int i = 0;

    for( i = 0; i < CPnt; i++)
    {

         printf("\n\n Enter Laptop No %d Details \n ",i+1);
         fflush(stdin);
         printf("\n\ Enter Laptop Model Name   = ");
         gets( LapList[CPnt].L_Model_N);
         printf("\n Enter Laptop Generation    =");
         scanf("%d",&LapList[CPnt].L_Gen);
         fflush(stdin);
         printf("\n Enter Laptop RAM           =");
         gets(LapList[CPnt].RAM);
         printf("\n Enter Laptop SSD           = ");
         scanf("%d",&LapList[CPnt].SSD);
         printf("\n Enter Laptop Updated Years =");
         scanf("%f",&LapList[CPnt].Update_Y);
         printf("\n ------------------------------------\n");
    }
    system("cls");
    for( i = 0; i < CPnt; i++)
    {
        printf("\n\n The Laptop No %d Detail => \n",i+1);
         printf("\n Laptop Model Name    = %s",LapList[CPnt].L_Model_N);
         printf("\n Laptop Generation    = %d",LapList[CPnt].L_Gen);
         printf("\n Laptop RAM           = %s",LapList[CPnt].RAM);
         printf("\n Laptop SSD           = %d",LapList[CPnt].SSD);
         printf("\n Laptop Updated Years = %2.2f",LapList[CPnt].Update_Y);
         printf("\n=====================**********=====================");

    }
    getch();
    return 0;

}
