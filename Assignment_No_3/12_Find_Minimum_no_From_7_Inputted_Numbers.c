#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, MinNo = 0, Uno = 0,Cnt = 1;

    while(Cnt <= 7 )
    {
        printf("Enter The No %d = ",Cnt);
        scanf("%d",&No);

        if(Cnt == 1 || No < MinNo)
        {
            MinNo = No;
        }

        Cnt++;
    }

    printf("\nThe Minimum Number is %d",MinNo);

    getch();
    return 0;
}


