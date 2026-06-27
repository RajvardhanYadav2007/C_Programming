#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt = 1;

    for(No = 27; No >= 19; No--)
    {
        printf("\n\n Table of %d", No);

        for(Cnt = 1; Cnt <= 10; Cnt++)
        {
            printf("\n %d * %d = %d", No, Cnt, No * Cnt);
        }
    }

    getch();
    return 0;
}

