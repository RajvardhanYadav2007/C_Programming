#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Two_Cnt = 0, Dig = 0, Temp = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Temp = No;
    while(Temp != 0)
    {
         Dig = Temp % 10;
         if( Dig == 2 )
         {
             Two_Cnt++;
         }
         Temp = Temp / 10;
    }
    printf("\n Count of zero in given number %d : %d", No, Two_Cnt);

    getch();
    return 0;
}
