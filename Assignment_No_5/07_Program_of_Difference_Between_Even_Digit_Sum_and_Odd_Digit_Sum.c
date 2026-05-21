#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Temp = 0, Ecnt = 0, Ocnt = 0, Diff = 0;

    printf(" Enter The Number : ");
    scanf("%d",&No);

    Temp = No;

    while( Temp < 0 || Temp != 0 )
    {
        if( Temp % 2 == 0 )
        {
            Dig = Temp % 10;
            Ecnt++;
            Temp = Temp / 10;
        }
        else if( Temp % 2 == 1 )
        {
            Dig = Temp % 10;
            Ocnt++;
            Temp = Temp / 10;
        }
    }

    Diff = Ecnt - Ocnt;

    printf ("\n The Given Number is %d \n The Even cnt is %d \n The Odd Cnt is %d ",No,Ecnt,Ocnt);
    printf("\n The Diff Between Ecnt And Ocnt is %d",Diff);

    getch();
    return 0;
}
