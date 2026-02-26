
#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill[10] = {} , i = 0 , Zerocnt = 0;

   printf("\n Enter All Bill Number To Check Count Odd Number \n");

   for( i = 0; i < 10; i++)
   {
       printf("\n Enter Bill No %2d is : ",i+1);
       scanf("%d",&Bill[i]);

       if( Bill[i] == 0 )
       {
           Zerocnt++;
       }
   }
      printf("\n\n The Count of Odd Number is %d",Zerocnt);

      getch();
      return 0;

}
