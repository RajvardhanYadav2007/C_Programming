#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0,no1 = 0,no2 = 0;

  printf("\nEnter the Row star Cnt = ");
  scanf("%d",&no1);
  printf("\nEnter the column star Cnt = ");
  scanf("%d",&no2);

  printf("\n ============******=========\n");

  for(i = 1; i <= no2; i++)
  {
    for(j = 1; j <= no1; j++)
    {
      printf(" * ");
    }
    printf("\n");
  }
  printf("\n ============******=========\n");

  getch();
  return 0;
}
