#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

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
    struct Laptop Lap1, Lap2,Lap3;

    strcpy( Lap1.L_Model_N,"Lenove");
    Lap1.L_Gen,12;
    strcpy( Lap1.RAM,"16 GB");
    Lap1.SSD = 516 ;
    Lap1.Update_Y = 5.5;

    strcpy( Lap2.L_Model_N,"HP");
    Lap2.L_Gen,8;
    strcpy( Lap2.RAM,"8 GB");
    Lap2.SSD = 256 ;
    Lap2.Update_Y = 2.5;

   strcpy( Lap3.L_Model_N,"ASUS");
    Lap3.L_Gen,11;
    strcpy( Lap3.RAM,"32GB");
    Lap3.SSD = 256 ;
    Lap3.Update_Y = 4.5;

    printf("\n Display Laptop Details => \n");

    printf("\n  The Laptop Name         = %s",Lap1.L_Model_N);
    printf("\n  The Laptop Generation   = %d",Lap1.L_Gen);
    printf("\n  The Laptop RAM          = %s",Lap1.RAM);
    printf("\n  The Laptop SSD          = %d",Lap1.SSD);
    printf("\n  The Laptop Update Years = %1.2f\n ",Lap1.Update_Y);

    printf("\n  The Laptop Name         = %s",Lap2.L_Model_N);
    printf("\n  The Laptop Generation   = %d",Lap2.L_Gen);
    printf("\n  The Laptop RAM          = %s",Lap2.RAM);
    printf("\n  The Laptop SSD          = %d",Lap2.SSD);
    printf("\n  The Laptop Update Years = %1.2f\n",Lap2.Update_Y);

    printf("\n  The Laptop Name         = %s",Lap3.L_Model_N);
    printf("\n  The Laptop Generation   = %d",Lap3.L_Gen);
    printf("\n  The Laptop RAM          = %s",Lap3.RAM);
    printf("\n  The Laptop SSD          = %d",Lap3.SSD);
    printf("\n  The Laptop Update Years = %1.2f",Lap3.Update_Y);


    getch();
    return 0;

}
