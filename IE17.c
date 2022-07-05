#include<stdio.h>
int main()
{
   int Lunit,Cunit,Total_Unit,Bill;
   printf("enter the last month unit:\n");
   scanf("%d",&Lunit);
   printf("enter the current month unit month unit:\n");
   scanf("%d",&Cunit);
   Total_Unit = Lunit+Cunit;
   if (Total_Unit<100)
   {
    Bill=2*Total_Unit;
    printf("Your electricity bill is %d/-",Bill);
   }
   else if (Total_Unit>100 || Total_Unit <= 200)
   {
    Bill=3*Total_Unit;
    printf("Your electricity bill is %d/-",Bill);
   }
   else if (Total_Unit>200 || Total_Unit <= 300)
   {
    Bill=4*Total_Unit;
    printf("Your electricity bill is %d/-",Bill);
   }
   else if (Total_Unit>300)
   {
    Bill=5*Total_Unit;
    printf("Your electricity bill is %d/-",Bill);
   }
   
   
   
    return 0;
}
