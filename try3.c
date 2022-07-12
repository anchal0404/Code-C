#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
   int n,i,f=1;
   scanf("%d",&n);
   if (n==0)
   {
    f=1;
   }
   else if (n<0)
   {
    printf("Invalid");
   }
   else
{
    for (i=1 ; i <= n; i++)
    {
        f=f*i;
    }
}
    printf("Factorial is :%d",f);

   
    return 0;
}
