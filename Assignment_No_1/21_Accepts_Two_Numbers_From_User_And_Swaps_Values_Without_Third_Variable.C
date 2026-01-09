#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter 1st Number   :");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number   :");
    scanf("%d",&No2);

    printf("\n\n\n Before Swap : \n\n First Number => %d \n\n Second Number => %d",No1,No2);

    No1 = No1 + No2 ;
    No2 = No1 - No2 ;
    No1 = No1 - No2 ;

    getch();

    printf("\n\n\n  After Swap :  \n\n  First Number => %d \n\n Second Number => %d\n ",No1,No2);

    getch();
    return 0;
}
