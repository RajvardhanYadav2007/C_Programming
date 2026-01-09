#include<stdio.h>
#include<conio.h>

int main()
{
    float Number = 0 , Square = 0;

    printf("\n Enter the square of number  :");
    scanf("%f",&Number);

    Square = Number * Number;

    printf("\n The Square of Number is %f",Square);

    getch();
    return 0;
}
