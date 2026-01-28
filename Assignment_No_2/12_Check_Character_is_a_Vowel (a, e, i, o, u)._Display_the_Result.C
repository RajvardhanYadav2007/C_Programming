#include<stdio.h>
#include<conio.h>

int main()
{
    char Char = '\0';

    printf("\n Enter Character to Check Vowel or Not  :");
    scanf("%c",&Char);

    if( Char == 'A' || Char == 'E' || Char == 'I' || Char == 'O' || Char == 'U' || Char == 'a' || Char == 'e' || Char == 'i' || Char == 'o' || Char == 'u')
    {
        printf("\n  This Character is Vowel is %c ",Char);
    }
    else
    {
        printf("\n This Character is Not Vowel is %c", Char);
    }
    getch();
    return 0;
}
