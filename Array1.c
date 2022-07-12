/*Array is a collection of similar type of elemnts stored in contigouos memory blocks ,under same name.
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x[10],i;
   for ( i = 0; i < 5; i++)
   {
   x[0]=1;
   x[1]=2;
   x[2]=4;
   x[3]=6;
   x[4]=8;
   printf("%d\n",x[i]);
   }
   return 0;
}
