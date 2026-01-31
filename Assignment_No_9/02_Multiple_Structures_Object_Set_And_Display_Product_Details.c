#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

 struct Product
 {
     int P_ID;
     char P_Name[24];
     float P_Price;
     float P_Sell_P;
 };
 int main()
 {
     struct Product Prod1, Prod2, Prod3;

     Prod1.P_ID = 2299;
     strcpy(Prod1.P_Name,"Maggiy Masala");
     Prod1.P_Price = 9.66;
     Prod1.P_Sell_P = 10.00;

     Prod2.P_ID = 2298;
     strcpy(Prod2.P_Name,"Matan Masala");
     Prod2.P_Price = 7.69;
     Prod2.P_Sell_P = 10.22;

     Prod3.P_ID = 2297;
     strcpy(Prod3.P_Name,"chicken Masala");
     Prod3.P_Price = 8.66;
     Prod3.P_Sell_P = 10.10;

     printf(" \n Display Productr Details => \n ");

     printf("\n  The Product Name       = %s",Prod1.P_Name);
     printf("\n  The product ID         = %d", Prod1.P_ID);
     printf("\n  The Product Price      = %2.4f",Prod1.P_Price);
     printf("\n  The Product Sell Price = %2.4f \n ",Prod1.P_Sell_P);

     printf("\n  The Product Name       = %s",Prod2.P_Name);
     printf("\n  The product ID         = %d", Prod2.P_ID);
     printf("\n  The Product Price      = %2.4f",Prod2.P_Price);
     printf("\n  The Product Sell Price = %2.4f \n  ",Prod2.P_Sell_P );

     printf("\n  The Product Name       = %s",Prod3.P_Name);
     printf("\n  The product ID         = %d", Prod3.P_ID);
     printf("\n  The Product Price      = %2.4f",Prod3.P_Price);
     printf("\n  The Product Sell Price = %2.4f",Prod3.P_Sell_P);

     getch();
     return 0;

 }
