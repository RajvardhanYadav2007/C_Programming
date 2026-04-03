#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Temp = 0, Sum = 0;

    printf("\n  Enter Number = ");
    scanf("%d",&No);

    Temp = No;

    while( Temp != 0 )
    {
        Dig = Temp % 10;
        Sum = Sum + Dig;
        Temp = Temp / 10;
    }
    printf("\n\n Sum of Given Number %d is => %d ",No,Sum);

    getch();
    return 0;
}
