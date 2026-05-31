#include<stdio.h>
#include<conio.h>

void Max_Num(int No[])
{
    int i = 0, MaxNo;

    MaxNo = No[0];

    for(i = 1; i < 10; i++)
    {
        if(No[i] > MaxNo)
        {
            MaxNo = No[i];
        }
    }

    printf("\n Maximum Number = %d", MaxNo);
}

int main()
{
    int No[10], i = 0;

    printf("Enter 10 Numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &No[i]);
    }

    Max_Num(No);

    getch();
    return 0;
}
