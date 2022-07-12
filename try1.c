/*Write a program to sum all the digits of the no.*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
     int n;
    int sum=0;
    int temp=0;
    scanf("%d",&n);
    while (n!=0)
    {
        temp=n%10;
        n=n/10;
        sum +=temp;


    }
    printf("%d",sum);
    return 0;

    
}
