#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt = 10;

    printf("\n Enter the Number To Create Multiplication Table = ");
    scanf("%d",&No);

    for(Cnt = 10; Cnt >= 1; Cnt--)
    {
        printf("\n %d * %d = %d", No, Cnt, No * Cnt);
    }

    getch();
    return 0;
}

