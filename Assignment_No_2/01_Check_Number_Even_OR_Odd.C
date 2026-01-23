#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter The Number for Check Even or Odd  => ");
    scanf("%d",&No);

    if(No % 2 == 0 )
    {
        printf("\n The Number is Even");
    }

    else if(No % 2 == 1)
    {
        printf("\n The number is Odd");

    }

    printf("\n\n THANK YOU");

    getch();
    return 0;
}
