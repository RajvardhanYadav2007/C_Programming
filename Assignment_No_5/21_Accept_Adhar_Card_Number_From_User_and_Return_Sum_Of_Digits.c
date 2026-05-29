#include<stdio.h>
#include<conio.h>

int main()
{
    long long int ANo = 0, Dig = 0, Temp = 0, ANo_Sum = 0;
    int Count = 0;

    printf(" Enter The 12 Digit Aadhar Number = ");
    scanf("%lld",&ANo);

    Temp = ANo;

    while(Temp != 0)
    {
        Count++;
        Temp = Temp / 10;
    }
    if(Count != 12)
    {
        printf("\n Invalid Input !! Please Enter Only 12 Digit Number");
    }
    else
    {
        Temp = ANo;

        while(Temp != 0)
        {
            Dig = Temp % 10;
            ANo_Sum = ANo_Sum + Dig;
            Temp = Temp / 10;
        }

    }

    printf("\n Sum of Given Aadhar Number = %lld", ANo_Sum);


    getch();
    return 0;
}

