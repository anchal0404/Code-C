#include<stdio.h>
int main(int argc, char const *argv[])
{
   int n;
    printf("Enter the year :");
    scanf("%d",&n);
    if ((n % 4 ==0) && ( n % 100 != 0))
    {
        printf("Entered year is leap year!");
    }
    else
    {
        printf("Year is not leap..");
    }
    

    return 0;
}
