#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    No = No & ~(1 << 6);

    printf("\n Modified Number is : %d", No);

    getch();
    return 0;
}
