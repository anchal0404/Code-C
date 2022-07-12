#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the day (1-7):\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    
    
    default:
        printf("This number does not comes under the week");
        break;
    }
    return 0;
}
