#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill[10] = {} , i = 0 , Ocnt = 0;

   printf("\n Enter All Bill Number To Check Count Odd Number \n");

   for( i = 0; i < 10; i++)
   {
       printf("\n Enter Bill No %2d is : ",i+1);
       scanf("%d",&Bill[i]);

       if( Bill[i] % 2 == 0 )
       {
           Ocnt++;
       }
   }
      printf("\n\n The Count of Odd Number is %d",Ocnt);

      getch();
      return 0;

}
