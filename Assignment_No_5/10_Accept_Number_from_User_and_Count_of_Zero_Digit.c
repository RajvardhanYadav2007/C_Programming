#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Dig = 0, Temp = 0, Cnt_zero = 0;

    printf(" \n Enter the number to Check Count of zero in Given Number : ");
    scanf("%d",&No);

    Temp = No;

    while( Temp != 0 )
    {
        Dig = Temp % 10;
        if( Dig == 0 )
        {
            Cnt_zero++;
        }

        Temp = Temp / 10;
    }
    printf(" The count of Zero is %d ",Cnt_zero);

    getch();
    return 0;
}
