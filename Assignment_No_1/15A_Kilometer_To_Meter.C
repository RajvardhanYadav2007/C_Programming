#include<stdio.h>
#include<conio.h>

int main()
{
    float Meter = 0.0,Kilometer = 0.0;

    printf("\n Enter number to convert kilometer to meter  :\n");
    scanf("%f",&Kilometer);

    Meter = Kilometer * 1000;

    printf("\n The Convert in is %f Km = %f Mtr",Kilometer,Meter);

    getch();
    return 0;

}
