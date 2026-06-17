#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch ='0', Ch1 = '0', Ch2 = '0';

    printf("\n Enter the char 1 = ");
    scanf(" %c",&Ch1);

    printf("\n Enter the char 2 = ");
    scanf(" %c",&Ch2);

    for( Ch = Ch1; Ch <= Ch2; Ch++ )
    {
        printf("\n %c",Ch);
    }

    getch();
    return 0;
}
