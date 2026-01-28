#include<conio.h>
#include<stdio.h>

int main()
{
    int No = 0;

    printf("\n Enter Number To Chech No Divisible by 5 and 7  :");
    scanf("%d",&No);
    printf("\n <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n ");

    if( No % 5 == 0 && No % 7 == 0)
    {
        printf("\n Number Divisible Both is = %d ",No);
    }
    else if( No % 5 == 0)
    {
        printf("\n Number Divisible By 5 is = %d ",No);
    }
    else if( No % 7 == 0)
    {
         printf("\n Number Divisible By 7 is = %d ",No);
    }
    else
    {
        printf(" \n This number Not Divisible By Both Values");
    }

    getch();
    return 0;
}
