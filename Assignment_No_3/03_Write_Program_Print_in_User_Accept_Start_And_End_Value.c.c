#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,Spt = 0,Ept = 0;

    printf("\n Enter Start Point Value  =");
    scanf("%d",&Spt);
    printf("\n Enter End Point Value    =");
    scanf("%d",&Ept);

    for( i = Spt; Spt <= Ept; Spt++)
    {
        printf(" \n %d",Spt);
    }
    getch();
    return 0;
}
