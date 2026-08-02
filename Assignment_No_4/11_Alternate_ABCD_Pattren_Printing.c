#include<stdio.h>
#include<conio.h>
int main()
{
    char ch ='/0';

    int i = 0,j = 0,RC = 0;

    printf("\n Enter A Row And Column:");
    scanf("%d",&RC);

    for(i= 1 ,ch ='A';i <= RC;i++,ch++)
    {
        for(j = 1; j <= RC ;j++)
        {
            if(i %2==0 )
            {
                printf(" %c ",ch+32);
            }
            else
            {
                 printf(" %c ",ch);
           }

        }
            printf("\n");

    }
        getch();
        return 0;
}
