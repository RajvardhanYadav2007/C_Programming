#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, RC = 0;
    char Ch = 'A';

    printf("\nEnter a Row And Column value: ");
    scanf("%d", &RC);

    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= RC; j++)
        {
            printf(" %3c ", Ch);
            Ch++;
        }
        printf("\n");
    }

    getch();
    return 0;
}
