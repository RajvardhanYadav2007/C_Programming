#include<conio.h>
#include<conio.h>

int main()
{
    int Year;
     printf(" \n Enter Year To Check Leap Year or Not :");
     scanf("%d",&Year);
     printf("\n =======================<>=========================\n ");

    if ( Year % 4 == 0)
    {
        printf("\n\n  This Year is Leap Year is %d",Year);
    }
    else
    {
        printf("\n \n This Year is Not Leap Year is %d",Year);
    }
    getch();
    return 0;
}
