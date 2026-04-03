#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Temp = 0, Multi = 1;

    printf(" \n Enter Number = ");
    scanf("%d",&No);

    Temp = No;

    while( Temp != 0 )
    {
        Dig = Temp % 10;
        Multi = Multi * Dig;
        Temp = Temp / 10;
    }
    printf("\n\n Multi of Given Number %d is => %d ",No,Multi);

    getch();
    return 0;
}
