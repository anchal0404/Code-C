/*
Write a program to enter three subject marks/Check if student is pass or Fail,only if he/she scores greater than 75
in each subject and the average of all three subject marks should also be greater than 80
*/
#include<stdio.h>
int main()
{
    int maths,Gk,English,sum,average;
    printf("Enter marks in maths:\n");
    scanf("%d",&maths);
    
    printf("Enter marks in Gk:\n");
    scanf("%d",&Gk);
    
    printf("Enter marks in English:\n");
    scanf("%d",&English);

sum=maths+Gk+English;
average=sum/3;


if (maths>75 && Gk>75 && English>75 && average>80) 
{
    printf("You have passed the Examination");

}
else
{
    printf("You are fail examination!");
}




 return 0;
}
