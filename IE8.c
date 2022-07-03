#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter the alphabet:");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
     printf("It is a vowel!",ch);
    }
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("It is a consonant!",ch);
    }
    else
    {
        printf("It is not alphabet");
    }
    
    
    return 0;
}
