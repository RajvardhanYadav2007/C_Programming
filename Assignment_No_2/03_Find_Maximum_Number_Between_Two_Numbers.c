#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n\n Enter Two Number To Check Maximum Number\n ");

    printf("\n Enter No 1  :");
    scanf("%d",&No1);

    printf("\n Enter No 2  :");
    scanf("%d",&No2);
    printf("\n\n <=================================> \n");

    if(No1 > No2)
    {
        printf("\n  No 1 is Maximum");
    }
    else if( No1 < No2 )
    {
        printf("\n ANS =>  No 2 is Maximum");
    }
    getch();
    return 0;
}
