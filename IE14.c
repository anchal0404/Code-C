/* if else Problem

Write a program to accept basic salary from user,
is 5% of basic salary. If salary is above 10000 then
gs=basic salary+TA+DA?

*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float sal,TA,DA,GS;
    printf("Enter Your Salary:\n");
    scanf("%f",&sal);
    printf("Basic salary is %f\n",sal);
    if (sal<=10000)
    {
      TA=0.1*sal;
      printf("TA is %f\n",TA);
      DA=0.05*sal;
      printf("DA is %f\n",DA);
    }
    else if (sal>=10000)
    {
        TA=1.2*sal;
        printf("TA is %f\n",TA);
        DA=0.06*sal;
        printf("DA is %f\n",DA);

    }
     GS=sal+TA+DA;
     printf("The gross salary of the employee is %f",GS);
    
    return 0;
}
