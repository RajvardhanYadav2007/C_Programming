#include<stdio.h>
#include<conio.h>

int main()
{
    char i = '\0',Spt = '\0',Ept = '\0';

    printf("\n Enter Start Point Value  =");
    scanf("%c",&Spt);
    printf("\n Enter End Point Value    =");
    Ept = getche();

    for( i = 'Spt'; Spt >= Ept; Spt--)
    {
        printf(" \n %c",Spt);
    }
    getch();
    return 0;
}
