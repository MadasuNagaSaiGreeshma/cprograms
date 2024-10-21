#include <stdio.h>
int main()
{
    char c;
    int lowercasevowel,uppercasevowel;
    printf("Enter the character:");
    scanf("%c",&c);
    lowercasevowel=(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
    uppercasevowel=(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
    if(lowercasevowel||uppercasevowel)
    {
        printf("%c is vowel",c);
    }
    else
    {
        printf("%c is constant",c);
    }
}
