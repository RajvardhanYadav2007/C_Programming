#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt = 1, MaxNo = 0, UNo = 0;

    printf("Enter How many Numbers = ");
    scanf("%d",&UNo);

    while(Cnt <= UNo)
    {
        printf("\nEnter Number %d = ",Cnt);
        scanf("%d",&No);

        if(Cnt == 1 || No > MaxNo)
        {
            MaxNo = No;
        }

        Cnt++;
    }

    printf("\nMaximum Number is = %d",MaxNo);

    getch();
    return 0;
}
