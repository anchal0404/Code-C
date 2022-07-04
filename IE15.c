#include<stdio.h>
int main(int argc, char const *argv[])
{
    float area,perimeter,length,width;
    printf("Enter the length:\n");
    scanf("%f",&length);
    
    printf("Enter the width:\n");
    scanf("%f",&width);

    area=length*width;
    printf("Area of rectangle is %f.\n",area);

    perimeter=2*(length+width);
    printf("Perimeter of rectangle is %f.\n",perimeter);
    

if (area>perimeter)
{
    printf("Area of rectagle is greater.\n");
}
else
{
    printf("Perimeter of rectangle is greater.");
}


    return 0;
}
