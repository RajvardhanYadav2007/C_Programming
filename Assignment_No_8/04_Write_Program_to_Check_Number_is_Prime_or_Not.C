#include<stdio.h>
#include<conio.h>

void Prime(int No)
{
    int i;

    if(No <= 1)
    {
        printf("Not Prime");
        return;
    }

    for(i = 2; i < No; i++)
    {
        if(No % i == 0)
        {
            printf("Not Prime");
            return;
        }
    }

    printf("Prime");
}

int main()
{
    int No = 0;

    printf("Enter Number : ");
    scanf("%d", &No);

    Prime(No);

    return 0;
}
