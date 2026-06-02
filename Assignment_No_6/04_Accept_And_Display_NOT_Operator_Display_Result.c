#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0,No2 = 0, Res1 = 0,Res2 = 0;

    printf("\n Enter 1st Number:");
    scanf("%d",&No1);
    printf("\n Enter 2nd Number:");
    scanf("%d",&No2);

    Res1 = ~ No1;
    Res2 = ~ No2;

    printf("\n Result of NOT Operator %d is %d and \n %d is %d", No1, Res1,No2,Res2);

    getch();
    return 0;
}

