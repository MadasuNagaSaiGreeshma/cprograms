#include<stdio.h>
void main()
{
    int i,j;
    char n='A';
    for(i=0;i<=5;++i)
    {
        for(j=5;j>=i;--j)
        {
            printf("%c\t",n);
        }
        n++;
        printf("\n");
    }
}