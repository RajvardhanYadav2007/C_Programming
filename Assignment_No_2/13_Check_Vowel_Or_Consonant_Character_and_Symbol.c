#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter Character To Check Vowel or Consonant  :");
    scanf("%c",&Ch);

    if( Ch == 'A' || Ch == 'a' || Ch == 'E' || Ch == 'e' || Ch == 'I' || Ch == 'i' || Ch == 'O' || Ch == 'o' || Ch == 'U' || Ch == 'u')
    {
        printf("\n  Given Character %c is Vowel",Ch);
    }
    else if( Ch >= 'A' && Ch <= 'Z' || Ch >= 'a' && Ch <= 'z' )
    {
        printf(" \n Given Character %c is Consonant",Ch);
    }
    else
    {
        printf("\n This Character is Other");
    }
    printf("\n THANK YOU");
    getch();
    return 0;
}
