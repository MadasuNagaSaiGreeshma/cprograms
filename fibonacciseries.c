#include <stdio.h>
void main()
{
    int i,n,c;
    int a=0,b=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The values %d %d\t",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        
    }
    }
