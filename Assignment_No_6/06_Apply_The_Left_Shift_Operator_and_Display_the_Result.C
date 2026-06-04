#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Res = 0;

    printf("\n Enter the 1st Number = \n ");
    scanf("%d",&No1);

    printf("\n Enter the 2nd Number = \n ");
    scanf("%d",&No2);

    Res = No1 << No2;

    printf(" The given No1 is %d & No2 is %d the Left Shift Result is %d",No1,No2,Res);

    getch();
    return 0;

}
