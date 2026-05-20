#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Dig = 0,Temp = 0, Dmul = 1;

    printf("Enter The Number To Check Multiplication of digits  = ");
    scanf("%d",&No);

    Temp = No;

    while( Temp != 0 )
    {
        Dig = Temp % 10;
        Dmul = Dmul * Dig;
        Temp = Temp / 10;
    }

    printf(" The Multiplicatin of Given Number of Dig %d is %d ",No,Dmul);

    getch();
    return 0;
}
