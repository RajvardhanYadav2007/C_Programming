#include<stdio.h>
#include<conio.h>

float PI_Val();

int main()
{
    printf("\nFunction Returns => %.2f", PI_Val());

    getch();
    return 0;
}

float PI_Val()
{
    float PI = 3.14;

    printf("The Value of PI is %.2f", PI);

    return PI;
}
