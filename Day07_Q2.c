/*Program to input a character and check whether it is a vowel or consonant using if–else.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    
    if ( ch=='a'|| ch=='e'||ch=='i' ||ch=='o'||ch=='u')
    { 
        printf("%c is a vowel",ch);
    }
    else 
    { printf("%c us a consonant", ch);
}
return 0;
}
