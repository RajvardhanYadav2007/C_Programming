
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

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
     struct Laptop Lap[3];
     int i = 0;

     for(i = 0; i < 3; i++)
     {
         printf("\n\n Enter Laptop No %d Detail   =>\n",i+1);
         fflush(stdin);
         printf("\n\ Enter Laptop Model Name  = ");
         gets( Lap[i].L_Model_N);
         printf("\n Enter Laptop Generation    =");
         scanf("%d",&Lap[i].L_Gen);
         fflush(stdin);
         printf("\n Enter Laptop RAM           =");
         gets(Lap[i].RAM);
         printf("\n Enter Laptop SSD           = ");
         scanf("%d",&Lap[i].SSD);
         printf("\n Enter Laptop Updated Years =");
         scanf("%f",&Lap[i].Update_Y);
         printf("\n ------------------------------------\n");

     }
     system("cls");
     for(i = 0; i < 3; i++)
     {
         printf("\n\n The Laptop No %d Detail => \n",i+1);
         printf("\n Laptop Model Name    = %s",&Lap[i].L_Model_N);
         printf("\n Laptop Generation    = %d",&Lap[i].L_Gen);
         printf("\n Laptop RAM           = %s",&Lap[i].RAM);
         printf("\n Laptop SSD           = %d",&Lap[i].SSD);
         printf("\n Laptop Updated Years = %2.2f",&Lap[i].Update_Y);
         printf("\n=====================**********=====================");
    }
    getch();
    return 0;

}
