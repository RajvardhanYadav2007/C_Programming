#include<stdio.h>
#include<conio.h>

int main()
{
    float Number = 0,Square = 0, Cube = 0;

    printf("\n  Enter The Number of Cube    :");
    scanf("%f",&Number);

    Cube = Number * Number * Number;

    printf("\n  The Number of Cube is       :%f ",Cube);

    getch();
    return 0;

}
