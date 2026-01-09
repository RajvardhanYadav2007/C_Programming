
#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20] ={'\0'};
    int roll_no = 0;
    char course[20] ={'\0'};
    char city[20]={'\0'};

    printf("\n  Enter the Student Name    :");
    scanf("%s",&name);

    printf("\n  Enter the Student Roll no :");
    scanf("%d",&roll_no);

    printf("\n  Enter the Student Course  :");
    scanf("%s",&course);

    printf("\n  Enter the Student City    :");
    scanf("%s",&city);


    printf("\n Student Name    : %s",name);

    printf("\n Student Roll no : %d",roll_no);

    printf("\n Student Course  : %s",course);

    printf("\n Student City    : %s",city);


    getch();
    return 0;

}
