#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '0';

    printf("Enter character: ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
            printf("%c ",ch);
            ch++;
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("%c ",ch);
            ch--;
        }
    }
    else
    {
        printf("Invalid");
    }
        return 0;

    getch();
    return 0;
}
