#include<stdio.h>
int main()
{
    int x[5],i;
    for ( i = 0; i < 4; i++)
    {
        scanf(" %d",&x[i]);
    }
   printf("Elemnt are:"); 
   for ( i = 0; i < 4; i++)
   {
   printf("%d\n",x[i]);
   }
   

    return 0;
}
