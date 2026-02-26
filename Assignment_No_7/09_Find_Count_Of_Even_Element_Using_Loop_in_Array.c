#include<stdio.h>
#include<conio.h>

int main()
{
   int Bill[10] = {},i = 0 , Ecnt = 0;

   printf("\n Enter All Bill Number To Check Count Even Number \n");

   for( i = 0; i < 10; i++)
   {
       printf("\n Enter Bill No %d is : ",i+1);
       scanf("%d",&Bill[i]);

       if( Bill[i] % 2 == 0)
       {
           Ecnt++;
       }
   }
   printf("\n\n The Count of Even Number is %d",Ecnt);
   getch();
   return 0;
}
