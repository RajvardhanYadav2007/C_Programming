#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,No1 = 0,No2 = 0, Cnt = 1;

    printf(" \n Enter First no = ");
    scanf("%d",&No1);

    printf(" \n Enter Second no = ");
    scanf("%d",&No2);

    for( No = No1; No <= No2; No++ )
    {
        printf( " \n\n Table of %d ",No);

        for(Cnt = 1; Cnt <= 10; Cnt++)
        {
            printf("\n %d * %d = %d", No, Cnt, No * Cnt);
        }
    }
    getch();
    return 0;


}
