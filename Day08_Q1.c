#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (c>='A' && c<='Z')
    { printf("Uppercase Alphabet");
    }
    else if (c>='0' && c<='9')
    { printf("Digit");
    }
    else if (c>='a' && c<='z')
    {
    printf("Lowercase alphabet");
    }
else 
{ printf("Special Character");
}
return 0;
}