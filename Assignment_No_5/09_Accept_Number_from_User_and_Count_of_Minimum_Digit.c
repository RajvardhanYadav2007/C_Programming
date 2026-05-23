
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Temp = 0, Min = 0;

    printf("\n Enter The Number = ");
    scanf("%d",&No);

    if( No == 0 )
    {
        printf(" The Number is invalid ");
    }
    else
    {
        while( No > 0 )
         {
             Dig = No % 10;

             if( Dig != 0 || Dig < Min )
             {
                 Min = Dig;

             Temp = Temp / 10;
         }
    }

    printf("\n The Givem Number is %d Minimum Number Of the Given Digit is %d",No,Min);

    getch();
    return 0;
    }

}

