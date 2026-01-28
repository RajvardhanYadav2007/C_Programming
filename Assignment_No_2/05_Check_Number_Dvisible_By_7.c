#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n\n Enter Number From Check Divisible by 7 or Not   :");
    scanf("%d",&No);

    if( No % 7 == 0)
    {
        printf("\n  This Number Divisible By 7 is = %d",No);
    }
    else
    {
        printf("\n This number is not Divisible By 7");
    }
    printf("\n THANK YOU");

    getch();
    return 0;
}
