#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0 , Temp = 0;

    printf("\n  Enter 1st Number   => ");
    scanf("%d",&No1);

    printf("\n  Enter 2nd Number   => ");
    scanf("%d",&No2);

    printf("\n Beforen swap :\n \n First No => %d \n \n Second No => %d",No1,No2);

    Temp  = No1;
    No1  = No2;
    No2 = Temp;

    getch();

    printf("\n  After Swap   :\n  First No => %d \n Second NO => %d",No1,No2);

    getch();
    return 0;

}
