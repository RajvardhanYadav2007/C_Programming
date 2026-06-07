#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n  Enter The Number = ");
    scanf("%d",&No);

    if(((No >> 4) & 1) && ((No >> 17) & 1))
    {
        printf("\n The Given Number %d is 5th and 18th Bit is ON",No);
    }
    else if( (No >> 4) & 1 )
    {
        printf("\n The Given Number %d is 5th Bit is ON",No);
    }
    else if ((No >> 17) & 1)
    {
        printf("\n The Given Number %d is 18th Bit is ON",No);
    }
    else
    {
        printf("\n The Given Number %d is 5th and 18th Bit is OFF",No);
    }

    getch();
    return 0;
}
