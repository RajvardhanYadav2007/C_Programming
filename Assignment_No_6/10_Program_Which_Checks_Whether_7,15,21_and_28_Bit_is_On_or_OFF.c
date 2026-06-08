#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter The No = ");
    scanf("%d",&No);

    if( ( No >> 6) & 1) && ( No >> 14) & 1) && ( No >> 20) & 1) && ( No >> 27) & 1))
    {
        printf("\n The 7, 15, 21 and 28 Bit is ON");
    }
    else if(( No >> 6) & 1)
        {
             printf("\n The 7 Bit is ON");

        }
    else if(( No >> 14) & 1)
        {
             printf("\n The 15 Bit is ON");

        }
    else if(( No >> 20) & 1)
        {
             printf("\n The 21 Bit is ON");

        }
    else if(( No >> 27) & 1)
        {
             printf("\n The 28 Bit is ON");

        }
    else
    {
        printf("\n The 7, 15, 21 and 28 Bit is OFF");

    }

    getch();
    return 0;
}

