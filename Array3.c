#include<stdio.h>
int main()
{
    int x[5],i,max=0;
    for ( i = 0; i < 5; i++)
    {
        scanf(" %d",&x[i]);
        if (x[i]>max)
        {
            max= x[i];
        }
        
    }
   printf("%d",max);
   
   
   
    return 0;
}
