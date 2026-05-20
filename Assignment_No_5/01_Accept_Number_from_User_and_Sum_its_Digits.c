#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0, Temp = 0, Dig = 0, Dsum = 0;

   printf("Enter a Number = ");
   scanf("%d",&No);

   Temp = No;

   while(Temp != 0)
   {
        Dig = Temp % 10;
        Dsum = Dsum + Dig;
        Temp = Temp / 10;
   }

   printf("\n\n Sum of Given Number %d is => %d.",No, Dsum);

   getch();
   return 0;


}
