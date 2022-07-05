//Write a C program to find maximum between two numbers.
#include<stdio.h> 
int main() 
{
   int n1,n2;
   printf("Enter the Numbers:\n");
   scanf("%d\n%d",&n1,&n2);
   if (n1>n2)
   {
    printf("%d is maximum!",n1);
   }
   else if (n2>n1)
   {
    printf("%d is maximum!",n2);
   }
   else if (n1==n2)
   {
    printf("Both are same");
   }
   
   
    return 0;
}
