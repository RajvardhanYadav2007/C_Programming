#include<stdio.h>
#include<conio.h>

int main()
{
    int Day = 0;

    printf("\n Enter Number of Day(1-7)  :");
    scanf("%d",&Day);

    if( Day == 1)
    {
        printf("\n Sunday");
    }
    else if( Day == 2 )
    {
        printf("\n  Monday");
    }
    else if( Day == 3 )
    {
        printf("\n Tuesday ");
    }
     else if( Day == 4 )
    {
        printf("\n Wednesday");
    }
     else if( Day == 5 )
    {
        printf(" \n Thursday");
    }
     else if( Day == 6 )
    {
        printf("\n  Friday");
    }
     else if( Day == 7 )
    {
        printf("\n  Saturday");
    }

     else
    {
        printf(" \n This Number is Invalid please check The Number ");
    }

    getch();
    return 0;
}
