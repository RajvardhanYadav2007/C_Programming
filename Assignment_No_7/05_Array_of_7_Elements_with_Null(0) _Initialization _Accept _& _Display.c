#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr_no[7] ={}, i = 0;
    printf("\n Enter Value of Elemen's");

    for(i = 0; i < 7; i++ )
    {
        printf("\n Enter Value of All %d Elements   :",i+1);
        scanf("%d",&Arr_no[i]);
    }

    printf("\n Value of Element => ");
    for( i = 0; i < 7; i++ )
    {
        printf("\n The value Of Element %d : is %d ",i + 1,Arr_no[i] );
    }
    getch();
    return 0;

}
