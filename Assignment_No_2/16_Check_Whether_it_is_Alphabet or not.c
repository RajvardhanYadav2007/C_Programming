#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';
    printf("\n Enter Character to Check Alphabet or Not  :");
    scanf("%c",&Ch);

    if( Ch >= 'A' && Ch <= 'B' || Ch >= 'a' && Ch <= 'b' )
    {
        printf("\n  Givent Character %c is Alphabet",Ch);
    }
    else
    {
        printf("\n  Givent Character %c is Not Alphabet",Ch);
    }
    getch();
    return 0;
}
