#include<stdio.h>
#include<conio.h>

int main()
{
    float Area = 0.0, Width = 0.0, Height = 0.0;


    printf("\n \t Enter the Hight    :");
    scanf("%f",&Height);

    printf("\n \t Enter the Width    :");
    scanf("%f",&Width);

    Area = Height * Width;

    printf("\n  The Area of Reactangle is  : %2f = %f * %f  \n",Area,Height,Width);

    getch();

    return 0;
}
