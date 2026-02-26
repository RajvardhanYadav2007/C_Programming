#include<stdio.h>
#include<conio.h>

int main()
{
    int BillNo[5] = {} , BillSum = 0 , i = 0;

    printf("\n Enter All Bill Values :\n");

    for( i = 0; i < 5; i++)
    {
        printf(" \n Enter Bill No %d :",i+1);
        scanf("%d",&BillNo[i]);

        BillSum = BillSum + BillNo[i];
    }
    getch();
    printf("\n The Sum of All Elements is : %d",BillSum);

    getch();
    return 0;
}
