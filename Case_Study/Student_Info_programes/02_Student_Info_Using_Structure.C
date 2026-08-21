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

    printf("\n Enter The Student Name = \n ");
    gets(Std.Name);

    printf("\n Enter The Student Roll No = \n ");
    scanf("%d",&Std.Roll_No);

    printf("\n Enter Physics Marks : \n");
    scanf("%d", &Std.Phy);

    printf("\n Enter Chemistry Marks : \n");
    scanf("%d", &Std.Chem);

    printf("\n Enter Mathematics Marks : \n ");
    scanf("%d", &Std.Maths);

    Std.Total = Std.Phy + Std.Chem + Std.Maths;

    Std.Per = (Std.Total / 300) * 100;

    _getch();

    printf("\n -----------------*****----------------- ");

    printf("\n Roll Number = %d\n",Std.Roll_No);

    printf("\n Name = %s\n",Std.Name);

    printf("\n Physics = %d",Std.Phy);

    printf("\n Chemistry = %d",Std.Chem);

    printf("\n Maths = %d",Std.Maths);

    printf("\n Total Marks = %0.0f\n",Std.Total);

    printf("\n Percentage = %0.3f\n",Std.Per);

    printf("\n Thanks for Cheking Result");

}
