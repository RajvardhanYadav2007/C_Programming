#include<stdio.h>
#include<conio.h>

int main()
{

    float celcius = 0.0,Farenheit = 0.0;

    printf("Enter number of convert Fahrrenheit to celciuss   :");
    scanf("%f",&Farenheit);

    celcius = (Farenheit-32) * (5/9);

    printf("\n\n %f celcius = %f Farenheit",celcius,Farenheit);
    getch();
    return 0;
}
