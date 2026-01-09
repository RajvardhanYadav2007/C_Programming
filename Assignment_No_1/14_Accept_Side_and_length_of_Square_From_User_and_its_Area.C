#include<stdio.h>
#include<conio.h>

int main()
{
    float Area = 0.0,Side = 0.0;

    printf("\n Enter the Side Length To Find Area of Square \n ");

    printf("\n Enter Side :\n");
    scanf("%f",&Side);

    Area = Side * Side;

    printf("\n The Area of Square is : %f * %f = %f \n",Side,Side,Area);

    getch();
    return 0;

}
