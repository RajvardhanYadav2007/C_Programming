#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,No1 = 0,No2 = 0;

    printf("\n Enter Start Point Value  =");
    scanf("%d",&No1);
    printf("\n Enter End Point Value    =");
    scanf("%d",&No2);

   if( No1 < No2)
   {
       for( i = No1; No1 <= No2; No1++)
       {
           printf("\n %d",No1);
       }
   }
   else
   {
       for( i = No1; No1 >= No2; No1--)
       {
           printf("\n %d",No1);
       }

   }

    getch();
    return 0;
}
