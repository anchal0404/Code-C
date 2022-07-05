/*
Write a program that accepts marks (out of 100) of five sub
percentage? Display message according to following
percentage >=60 Grade A
percentage >=50 Grade B
percentage >=40 Grade C
percentage <40 Grade D
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int maths,sst,science,english,hindi,sum,percentage;
    printf("Enter the marks of maths out of 100:\n");
    scanf("%d",&maths);
   
    printf("Enter the marks of sst out of 100:\n");
    scanf("%d",&sst);
  
    printf("Enter the marks of science out of 100:\n");
    scanf("%d",&science);
   
    printf("Enter the marks of english out of 100:\n");
    scanf("%d",&english);
    
    printf("Enter the marks of hindi out of 100:\n");
    scanf("%d",&hindi);
   

sum = maths + sst + science + hindi + english;
percentage = (sum/500)*100;

if (percentage>=60)
{
   printf("You have got Grade A");
}
else if (percentage>=50)           
{
    printf("You have got Grade B");
}
else if (percentage>=40)
{
    printf("You have got Grade C");
}
else if (percentage<40)
{
    printf("You have got Grade D");
}

return 0;

}
