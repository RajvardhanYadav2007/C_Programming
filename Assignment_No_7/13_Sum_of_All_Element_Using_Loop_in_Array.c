#include<stdio.h>
#include<conio.h>

int main()
{
    int Element[5] = {} , EleSum = 0 , i = 0;

    printf("\n Enter Number of All Element in Sum = \n");

    for( i = 0; i < 5; i++)
    {
        printf("\n Enter Element No %d  : ",i+1);
        scanf("%d",&Element[i]);

    }
    for( i = 0; i < 5; i++)
    {
         EleSum += Element[i];
    }
    printf("\n The All Elements of Sum is %d",EleSum);

    getch();
    return 0;
}
