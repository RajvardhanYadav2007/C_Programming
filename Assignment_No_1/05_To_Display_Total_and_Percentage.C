#include<stdio.h>
#include<conio.h>

int main()
{
    int phy,chem,bio,total;
    float per;

    printf("\n Enter the marks of phy :");
    scanf("%d",&phy);

    printf("\n Enter the marks of chem :");
    scanf("%d",&chem);

    printf("\n Enter the marks of bio  :");
    scanf("%d",&bio);

    total = phy + chem + bio;

    per=float (total * 100)/300;

    printf("\n The total marks : %d",total);
    printf("\n The percentage  : %f",per);

    getch();

    return 0;

}





