#include <stdio.h>
void main() 
{
    int i,j,n=1;
    for(i=0;i<5;++i)
    {
        for(j=1;j<i;++j)
        {
            printf("%d\t",n++);
        }
        printf("\n");
    }
}