#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter the Alphabet:");
    scanf("%c",&ch);
    if ((ch >= 'a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
    {
        printf("Character is an Alphabet");
    }
    else
    {
        printf("Character is not Alphabet");
    }
    
return 0;
}
