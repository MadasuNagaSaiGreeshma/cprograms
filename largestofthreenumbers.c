#include <stdio.h>
int main()
{
    int a=5,b=3,c=9;
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is largest",a);
        }
    }
    else if(b>c)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
    return 0;
}
