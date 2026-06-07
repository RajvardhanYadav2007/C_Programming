#include<stdio.h>
#include<conio.h>

int main()
{
     int No = 0;

     printf("\n Enter The No1 = ");
     scanf("%d",&No);


     if( ( No >> 14 ) & 1 )
     {
         printf("\n  The Given Number Of The 15th Bit is ON");
     }
    else
    {
         printf("\n  The Given Number Of The 15th Bit is OFF");
    }

    getch();
    return 0;

}
