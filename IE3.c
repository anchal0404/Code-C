#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n>0)
    {
        printf("Number is positive");
    }
    else if (n<0)
    {
        printf("Number is negative");
    }
    else if (n==0)
    {
        printf("Number is zero");
    }
    
    

    return 0;
}
