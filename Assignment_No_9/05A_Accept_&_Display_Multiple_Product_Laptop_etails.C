
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
    struct Laptop Lap1,Lap2,Lap3;

    printf("\n\n Enter 1st Laptop Details");

    fflush(stdin);

    printf("\n  Enter Laptop Name          :");
    gets(Lap1.L_Model_N);

    printf("\n Enter Laptop Generation     :");
    scanf("%d",&Lap1.L_Gen);

    fflush(stdin);

    printf("\n Enter Laptop RAM            :");
    gets(Lap1.RAM);

    printf("\n Enter Laptop SSD            :");
    scanf("%d",&Lap1.SSD);

    printf("\n Enter Laptop Updates Years :");
    scanf("%f",&Lap1.Update_Y);

    printf("\n\n Enter 2nd Laptop Details");

    fflush(stdin);

    printf("\n  Enter Laptop Name          :");
    gets(Lap2.L_Model_N);

    printf("\n Enter Laptop Generation     :");
    scanf("%d",&Lap2.L_Gen);

    fflush(stdin);

    printf("\n Enter Laptop RAM            :");
    gets(Lap2.RAM);

    printf("\n Enter Laptop SSD            :");
    scanf("%d",&Lap2.SSD);

    printf("\n Enter Laptop Updates Years :");
    scanf("%f",&Lap2.Update_Y);

    printf("\n\n Enter 3rd Laptop Details");

    fflush(stdin);

    printf("\n  Enter Laptop Name          :");
    gets(Lap3.L_Model_N);

    printf("\n Enter Laptop Generation     :");
    scanf("%d",&Lap3.L_Gen);

    fflush(stdin);

    printf("\n Enter Laptop RAM            :");
    gets(Lap3.RAM);

    printf("\n Enter Laptop SSD            :");
    scanf("%d",&Lap3.SSD);

    printf("\n Enter Laptop Updates Years :");
    scanf("%f",&Lap3.Update_Y);

    system("cls");

    printf("\n\n THE 1st LAPTOP DETAILS");

    printf("\n Laptop Name is          = %s",Lap1.L_Model_N);
    printf("\n Laptop Generation       = %d",Lap1.L_Gen);
    printf("\n Laptop RAM is           = %s",Lap1.RAM);
    printf("\n Laptop SSD is           = %d",Lap1.SSD);
    printf("\n Laptop Updates Years is = %2.2f",Lap1.Update_Y);

    printf("\n\n THE 2nd LAPTOP DETAILS");

    printf("\n Laptop Name is          = %s",Lap2.L_Model_N);
    printf("\n Laptop Generation       = %d",Lap2.L_Gen);
    printf("\n Laptop RAM is           = %s",Lap2.RAM);
    printf("\n Laptop SSD is           = %d",Lap2.SSD);
    printf("\n Laptop Updates Years is = %2.2f",Lap2.Update_Y);

    printf("\n\n THE 3rd LAPTOP DETAILS");

    printf("\n Laptop Name is          = %s",Lap3.L_Model_N);
    printf("\n Laptop Generation       = %d",Lap3.L_Gen);
    printf("\n Laptop RAM is           = %s",Lap3.RAM);
    printf("\n Laptop SSD is           = %d",Lap3.SSD);
    printf("\n Laptop Updates Years is = %2.2f",Lap3.Update_Y);


    getch();
    return 0;

}
