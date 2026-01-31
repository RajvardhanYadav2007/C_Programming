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
    struct Laptop Lap;

    strcpy( Lap.L_Model_N,"Lenove");
    Lap.L_Gen,12;
    strcpy( Lap.RAM,"16 GB");
    Lap.SSD = 516 ;
    Lap.Update_Y = 5.5;

    printf("\n Display Laptop Details => \n");

    printf("\n  The Laptop Name         = %s",Lap.L_Model_N);
    printf("\n  The Laptop Generation   = %d",Lap.L_Gen);
    printf("\n  The Laptop RAM          = %s",Lap.RAM);
    printf("\n  The Laptop SSD          = %d",Lap.SSD);
    printf("\n  The Laptop Update Years = %1.2f",Lap.Update_Y);

    getch();
    return 0;

}
