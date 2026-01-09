#include<stdio.h>
#include<conio.h>

int main()
{
    float  radii = 4.40, area = 0.0, pie = 3.14;

    printf("Enter Circle Radius Value      :");
    scanf("%f",&radii);

    area = pie * radii * radii;

    printf("The Area of circle with radii  :%f=%f",radii,area);

    getch();
    return 0;


}

