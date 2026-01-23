#include<stdio.h>
#include<conio.h>

int main()
{
   int No1 = 0, No2 = 0, No3 = 0;

   printf("\n Enter Three Numbers To Check Maximum Numbers");

   printf("\n\n Enter No 1 :");
   scanf("%d",&No1);
   printf("\n\ Enter No 2  :");
   scanf("%d",&No2);
   printf("\n\ Enter No 3  :");
   scanf("%d",&No3);

   if( No1 > No2 && No1 > No3)
   {
       printf("\n No 1 is Maximum : %d",No1);
   }
   else if( No2 > No1 && No2 > No3 )
   {
       printf("\n No 2 is Maximum : %d",No2);
   }
   else if( No3 > No2 && No3 > No1)
   {
       printf("\n No 3 is Maximum : %d",No2);
   }
   else if( No1 == No2 && No2 == No3 && No3 == No1 )
   {
       printf("\n This %d and %d and %d Are Equal Number's",No1,No2,No3);
   }

    getch();
    return 0;
}

