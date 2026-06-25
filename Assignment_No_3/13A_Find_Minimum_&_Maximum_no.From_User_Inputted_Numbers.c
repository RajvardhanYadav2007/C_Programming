#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt = 1, MaxNo = 0, MinNo = 0,UNo = 0;

    printf("\n Enter Number Inputtesd number = ");
    scanf("%d",&UNo);

    while(Cnt <= UNo)
    {
        printf("\n Enter The Number %d = ", Cnt);
        scanf("%d", &No);

        if(Cnt == 1)
        {
            MaxNo = No;
            MinNo = No;
        }
        else
        {
            if(No > MaxNo)
            {
                MaxNo = No;
            }
            if(No < MinNo)
            {
                MinNo = No;
            }
        }
        Cnt++;
    }

    printf("\n\n The Maximum Number is %d", MaxNo);
    printf("\n The Minimum Number is %d", MinNo);

    getch();
    return 0;
}

