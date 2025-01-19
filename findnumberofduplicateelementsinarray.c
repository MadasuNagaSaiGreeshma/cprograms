#include <stdio.h>
int main()
{
    int a[10],n,i,j,count=0;
    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("the number of duplicate elements are %d\n",count);
}

       
