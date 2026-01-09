
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1=0,num2=0,multi=0;

    printf("\n\n Enter value of num1  :");
    scanf("%d",&num1);

    printf("\n\n Enter value of num2  :");
    scanf("%d",&num2);

    multi = num1 * num2;

    printf("\n\n The multiplication of %d * %d is %d",num1,num2,multi);
    getch();
    return 0;

}
