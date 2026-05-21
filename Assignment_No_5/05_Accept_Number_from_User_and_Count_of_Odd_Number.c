#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Temp = 0, Ocnt = 0;

    printf("Enter a Number To Check Count of Odd No : ");
    scanf("%d",&No);

    Temp = No;
     while( Temp < 0 || Temp > 0 )
     {
         Dig = Temp % 10;
         if( Temp % 2 == 1 )
         {
             Ocnt++;
         }
         Temp = Temp / 10;
     }

     printf("The Given Number of %d is Count of Odd Number is %d",No,Ocnt);

     getch();
     return 0;
}
