#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int Roll_No;
    char Name[80];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};
int main()
{
    struct Stud Std;
    Std.Roll_No = 85;
    strcpy(Std.Name,"Rajvardhan Yadav");
    Std.Phy = 56;
    Std.Chem = 89;
    Std.Maths = 75;

    Std.Total = Std.Phy + Std.Chem + Std.Maths;
    Std.Per = (Std.Total / 300) * 100;

    printf("\n Roll Number = %d\n",Std.Roll_No);

    printf("\n Name = %s\n",Std.Name);

    printf("\n Total Marks = %0.0f\n",Std.Total);

    printf("\n Percentage = %0.3f\n",Std.Per);


    printf("\n Thank you For Visiting");
    getch();
    return 0;

}
