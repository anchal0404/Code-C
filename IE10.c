#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z')
    {
        printf("%c is in lowercase",ch);
    }
    else if (ch>='A'&&ch<='Z')
    {
        printf("%c is in uppercase",ch);
    }
    
    
    return 0;
}
