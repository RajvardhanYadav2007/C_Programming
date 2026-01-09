#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n  Enter The Character for ASCII :");

    ch = getche();
    printf("\n  Given decimal Value      : %d",ch);
    printf("\n  Given Hexadecimal Value  : %x",ch);
    printf("\n  Given octel Value        : %o",ch);

    getch();
    return 0;
}
