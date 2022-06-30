#include<stdio.h>
int main(int argc, char const *argv[])
{
    int maths,science,both;
    printf("Enter the Marks YOu have obtained in maths :\n");
    scanf("%d",&maths);
    printf("Enter the Marks YOu have obtained in science :\n");
    scanf("%d",&science);
    


    
if (maths>30)
{
   printf("You got a Pen\a");
}
else
{
    printf("You are back in maths\n");

}

if (science>30)
{    
    printf("YOu got a pen\n");

}
else
{
   printf("You are back in science\n");

}
if (maths+science>45)
{
    printf("YOu got total marks %d+%d=%d\n",maths,science,maths+science);
    printf("YOu got a lunch box\n");
}
else{
    printf("you are fail in class");

}

    return 0;
}

