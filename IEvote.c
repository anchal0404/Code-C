#include<stdio.h>
int main(int argc, char const *argv[])
{
   int n;
   printf("enter your age:\n");
   scanf(" %d",&n);
  printf("You have enter your age %d\n",n);
   if (n>=18)
   {
    printf("You can vote!\n");
    }
   else if (n<10)
   {
      printf("Ypu kiddo\n");
   }
   
   else if (n>10)
   {
      printf("You are 10 to 18 you can vote for kids\n");
   }
   
   else
   {
      printf("You cannot vote\n");
   }
   
   
    
}

/*
C If else statements- Control Statements
It is used to perform operations based on some conditions
Type of if Statements:
If statments
If else 
if Else if
Nested if
*/

