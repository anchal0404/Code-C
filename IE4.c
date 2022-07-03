#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if ((n %5 == 0) && (n %11 == 0))
    {
        printf("The no. is divisble by 5 and 11");
    }
    else
    {
        printf("The number is not divisible by 11 and 5");
        
    }
    
    return 0;
}
