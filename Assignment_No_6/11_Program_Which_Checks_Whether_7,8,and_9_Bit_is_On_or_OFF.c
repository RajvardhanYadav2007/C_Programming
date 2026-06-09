#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf(" \n Enter the Number = ");
    scanf("%d",&No);

    if( (( No >> 6) & 1)  &&  (( No >> 7) & 1) && (( No >> 8) & 1))
    {
        printf("\n The Given Number %d is 7,8 And 9 Bit is ON ",No);
    }
    else if ( (( No >> 6) & 1) )
    {
        printf("\n The 7 Bit is ON ");
    }
    else if ( (( No >> 7) & 1) )
    {
        printf("\n The 8 Bit is ON ");
    }
    else if ( (( No >> 8) & 1) )
    {
        printf("\n The 9 Bit is ON ");
    }
    else
    {
        printf("\n The Given Number %d is 7,8 And 9 Bit is OFF ",No);

    }
    getch();
    return 0;
}
