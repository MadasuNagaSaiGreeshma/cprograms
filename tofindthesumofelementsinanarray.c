#include <stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        sum=sum+a[i];
    }
        printf("the sum of the elements of array is %d",sum);
}
