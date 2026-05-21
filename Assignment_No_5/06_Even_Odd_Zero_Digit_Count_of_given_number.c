#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Temp = 0, Ecnt = 0, Ocnt = 0,Zero = 0;

    printf("Enter The Number To Count of Even,Odd and Zero Digit :");
    scanf("%d",&No);

    Temp = No;

    while( Temp < 0 || Temp > 0 )
    {
        Dig = Temp % 10;

        if( Temp % 2 == 0)
        {
            Ecnt++;
        }
        else if( Temp % 2 == 1 )
        {
            Ocnt++;
        }
        else
        {
            Zero++;
        }
        Temp = Temp / 10;
    }

    printf(" The Given Number is %d Count of : \n Event No = %d \n Odd no = %d \n Zero = %d ",No,Ecnt,Ocnt,Zero);

    getch();
    return 0;
   }

