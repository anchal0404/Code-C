#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int count=0;
    scanf("%d",&n);
    while (n!=0)
    {
        n/=10;
        count +=1;

    }
    printf("%d",count);
    return 0;

    
}