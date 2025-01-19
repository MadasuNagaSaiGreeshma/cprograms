#include <stdio.h>
int main()
{
    int a[10],n,i,avg,sum=0;
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
        avg=sum/n;
    }
        printf("the avg of the  array is %d",avg);
}
