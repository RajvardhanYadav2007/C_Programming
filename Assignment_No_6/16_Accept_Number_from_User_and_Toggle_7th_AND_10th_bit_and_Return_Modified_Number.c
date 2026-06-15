#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\n Enter Number :");
    scanf("%d",&No);

    if(No & (1 << 6))
    {
        No = No ^ (1 << 6);
    }

    if(No & (1 << 9))
    {
        No = No ^ (1 << 9);
    }

    printf("\n Modified Number Given Number : %d", No);

    getch();
    return 0;
}
