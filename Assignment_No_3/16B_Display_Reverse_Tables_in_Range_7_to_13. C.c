#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt = 10;

    for(No = 7; No <= 13; No++)
    {
        printf("\n\n Table of %d", No);

        for(Cnt = 10; Cnt >= 1; Cnt--)
        {
            printf("\n %d * %d = %d", No, Cnt, No * Cnt);
        }
    }

    getch();
    return 0;
}

