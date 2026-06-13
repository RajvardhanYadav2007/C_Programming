#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter The Number = ");
    scanf("%d",&No);

    if( (No >> 1) & 6)
    {
        No = No & ~( 1 << 6 );
    }
    else if( (No >> 1) & 13)
    {
        No = No & ~( 1 << 13 );
    }

    printf (" \n  The Given Number Modify %d  ",No);

    getch();
    return 0;


}
