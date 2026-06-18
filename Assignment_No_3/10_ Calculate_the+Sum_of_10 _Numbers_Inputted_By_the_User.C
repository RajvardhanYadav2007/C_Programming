#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sum = 0, i = 0;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter the 10 Numbers = ");
        scanf("%d",&No);

        Sum = Sum + No;
    }

    printf("\nThe Sum of given Numbers is = %d", Sum);

    getch();
    return 0;
}
