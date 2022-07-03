#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n % 2 == 0)
    {
        printf("Entered number is even");
    }
    else
    {
        printf("Number is odd");
    }
    
    
    return 0;
}
