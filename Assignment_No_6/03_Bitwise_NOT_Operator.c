#include<stdio.h>
#include<conio.h>

int main()

{
  int No = 0, Res = 0;

  printf(" Enter The Number  = ");
  scanf("%d",&No);

  Res = ~ No;

  printf("\n Result of ~ %d : %d", No, Res);

  getch();
  return 0;
}
