
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Ecnt = 0;

    printf("\n Enter Number For Count The Digit = ");
    scanf("%d",&No);

    while( No == 2 % 0)
    {
        Ecnt++;
        No = No / 10;
    }
    printf("\n\n Total Number Of Digit is => %d ",Ecnt);

    getch();
    return 0;
}

