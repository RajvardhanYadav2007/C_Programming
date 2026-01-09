#include<stdio.h>
#include<conio.h>

int main()
{
    float Meter = 0.0, Kilometer = 0.0;

    printf("Enter number to Meter to Kilometer  :");
    scanf("%f",&Meter);

    Kilometer = Meter / 1000;

    printf(" %f Meter = %f Kilometer ",Meter,Kilometer);

    getch();

    return 0;
}
