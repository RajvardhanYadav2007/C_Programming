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
    struct Laptop Lap;

    fflush(stdin);

    printf("\n  Enter Laptop Name          :");
    gets(Lap.L_Model_N);

    printf("\n Enter Laptop Generation     :");
    scanf("%d",&Lap.L_Gen);

    fflush(stdin);

    printf("\n Enter Laptop RAM            :");
    gets(Lap.RAM);

    printf("\n Enter Laptop SSD            :");
    scanf("%d",&Lap.SSD);

    printf("\n Enter Laptop Updates Years :");
    scanf("%f",&Lap.Update_Y);

    system("cls");

    printf("\n Laptop Name is          = %s",Lap.L_Model_N);
    printf("\n Laptop Generation       = %d",Lap.L_Gen);
    printf("\n Laptop RAM is           = %s",Lap.RAM);
    printf("\n Laptop SSD is           = %d",Lap.SSD);
    printf("\n Laptop Updates Years is = %2.2f",Lap.Update_Y);

    getch();
    return 0;

}
