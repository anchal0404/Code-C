#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n==1)
    {
        printf("Monday");
    }
    else if (n==2)
    {
        printf("Tuesday");
    }
    else if (n==3)
    {
        printf("Wednesday");
    }
    else if (n==4)
    {
        printf("Thursday");
    }
    else if (n==5)
    {
        printf("Friday");
    }
    else if (n==6)
    {
        printf("Saturday");
    }
    else if (n==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Number is not valid!");
    }
    
    
    
       
    
    return 0;
}
