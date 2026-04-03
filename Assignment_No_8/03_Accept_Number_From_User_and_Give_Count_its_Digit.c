
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dcnt = 0;

    printf("\n Enter Number For Count The Digit = ");
    scanf("%d",&No);

    while( No != 0)
    {
        Dcnt++;
        No = No / 10;
    }
    printf("\n\n Total Number Of Digit is => %d ",Dcnt);

    getch();
    return 0;
}
