//Write a C program to find maximum between three numbers.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,n3,max;
    printf("Enter the numbers:\n");
    scanf("%d\n%d\n%d",&n1,&n2,&n3);
    
        if ((n1>n3)&&(n1>n3))
        {
           max=n1;
        }
        else if((n2>n3)&&(n2>n1))
        {
            max=n2;
        }
        else if ((n3>n1)&&(n3>n2))
        {
            max=n3;
        }
        
        printf("Maximum no.=%d",max);
        
    
    
    
    return 0;
}
