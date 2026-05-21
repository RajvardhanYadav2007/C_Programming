#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Dig = 0,Temp = 0, Dcnt = 0;

    printf("Enter The Number To Check Multiplication of digits  = ");
    scanf("%d",&No);

    Temp = No;

    if( Temp < 0 || Temp > 0)
    {
    while( Temp != 0 )
    {
        Dig = Temp % 10;
        Dcnt++;
        Temp = Temp / 10;
    }
    }

    printf(" The Multiplicatin of Given Number of Dig %d is %d ",No,Dcnt);

    getch();
    return 0;
}

