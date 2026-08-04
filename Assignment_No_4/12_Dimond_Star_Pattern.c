#include<stdio.h>
#include<conio.h>

int main()
{
    int n = 0 , i = 0 , j = 0;

    printf("\n Enter a Number of Rows :");
    scanf("%d",&n);

    printf("\n pattern is : \n\n");

    for(i = 1; i <= n / 2 +1 ; i++)
    {
        for(j = 1; j <=(n/2+1)- i ; j++)
        {
            printf("   ");
        }
        for( j =1 ; j <= ( 2* i) - 1 ; j++)
        {
            printf(" * ");
        }

        printf("\n");

    }
     for(i = 1; i <= n / 2  ; i++)
    {
        for(j = 1; j <= i ; j++)
        {
            printf("   ");
        }
        for( j =1 ; j <= n-(2*i) ; j++)
        {
            printf(" * ");
        }

        printf("\n");
       }
       return 0;
}
