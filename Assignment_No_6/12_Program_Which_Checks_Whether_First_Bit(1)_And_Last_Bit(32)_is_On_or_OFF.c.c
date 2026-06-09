#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf(" \n Enter the Number = ");
    scanf("%d",&No);

    if( (( No >> 0) & 1)  &&  (( No >> 31) & 1))
    {
        printf("\n The Given Number %d is First Bit And Last Bit is ON ",No);
    }
    else if ( (( No >> 0) & 1) )
    {
        printf("\n The First Bit is ON ");
    }
    else if ( (( No >> 31) & 1) )
    {
        printf("\n The Last Bit is ON ");
    }
    else
    {
        printf("\n The Given Number %d is First Bit And Last Bit is OFF ",No);

    }
    getch();
    return 0;
}
