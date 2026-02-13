#include<stdio.h>
#include<conio.h>

int main()
{
    char Spt = '\0',Ept = '\0';

    printf("\n Enter Start Point Value  =");
    scanf("%c",&Spt);

    printf("\n Enter End Point Value    =");
    Ept = getche();
    getch();

    for(; Spt <= Ept; Spt++)
    {
        printf(" \n %c",Spt);
    }
    getch();
    return 0;
}
