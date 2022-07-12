//Write a program to print * no. of time taken by the user in increasing order.

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("Enter the no. of times:\n");
    scanf("%d",&n);
    for ( j = 1; j<n; j++)
    {
         for ( i = 1; i <=j; i++)
    {
        printf(" * ");
    }
    printf("\n");
    }
    for ( j = n; j>=1; j--)
    {
         for ( i = 1; i <=j; i++)
    {
        printf(" %d " ,j);
    }
    printf("\n");
    }
    
   
    
    return 0;
}
