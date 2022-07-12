/*2 D Array- Syntax int x[3](row)[4](column)
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x[3][3],i,j,a;
    printf("Enter elements:");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           scanf(" %d ",&x[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           printf(" \t%d ",x[i][j]);
        }
       printf("\n") ;
    }
    
     
    return 0;
}
