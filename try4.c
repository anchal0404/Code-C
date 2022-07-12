/*program to take integer no. as input form user and determine the reverse of it.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,temp,last=0;
    printf("Enter the number:\n");
    scanf("%d",&n);

    while (n!=0)
    {
        temp=n%10;
        last=last*10+temp;
        n=n/10;

        
    }
    printf("%d",last);

    return 0;
}
