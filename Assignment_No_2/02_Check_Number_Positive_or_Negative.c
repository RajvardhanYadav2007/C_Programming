#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number to Check the Positive or Negative :");
    scanf("%d",&No);

    if( No > 1)
    {
        printf("\n The number is Positive");
    }
    else if( No < -1)
    {
        printf("\n The number is Negative");
    }
    printf("\n \n THANK YOU");

    getch();
    return 0;
}
