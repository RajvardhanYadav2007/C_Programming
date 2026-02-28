#include<stdio.h>
#include<conio.h>

int main()
{
    int BillNo[10] = {}, i = 0, Ecnt = 0, Ocnt = 0,Zero = 0,N = 0;

    printf("\n Enter All Element Check Count of Even,Odd,Zero  :");

    printf("\n\n Enter Count Of Total Element : ");
    scanf("%d",&N);

    for( i = 0; i < N; i++)
    {
        printf("\n Enter Element No %d is   :",i+1);
        scanf("%d",&BillNo[i]);

        if( BillNo[i] == 0)
        {
            Zero++;
        }
        else if( BillNo[i] % 2 == 0 )
        {
            Ecnt++;
        }
        else if( BillNo[i] % 2 == 1)
        {
            Ocnt++;
        }

    }
       printf("\n The Count of Even Number is : %d",Ecnt);
       printf("\n The Count of Odd Number is  : %d",Ocnt);
       printf("\n The Count of Zero Number is : %d",Zero);


       getch();
       return 0;
}
