#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Res = 0;

    printf("\n Enter the No 1 = ");
    scanf("%d",&No1);

    printf("\n Enter the No 2 = ");
    scanf("%d",&No2);

    Res = No1 >> No2;

    printf("\n The given No1 is %d & No2 is %d Are Result is %d",No1,No2,Res);

    getch();
    return 0;
}
