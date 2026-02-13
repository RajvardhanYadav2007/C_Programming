#include<stdio.h>
#include<conio.h>

int main()
{
    char i = '\0',No1 = '\0',No2 = '\0';

    printf("\n Enter Start Point Value  =");
    scanf("%c",&No1);
    printf("\n Enter End Point Value    =");
    No2 = getche();
    getch();
    printf("\n ___________________________________________\n");

   if( No1 < No2)
   {
       for( i = No1; No1 <= No2; No1++)
       {
           printf("\n %c",No1);
       }
   }
   else
   {
       for( i = No1; No1 >= No2; No1--)
       {
           printf("\n %c",No1);
       }

   }
   printf("\n Thank you");

    getch();
    return 0;
}
