#include <stdio.h>
int main()
{
    int a[10],b[10],c[10],n,i,j=0,k=0;
    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       if(a[i]%2==0)
       {
            b[j]=a[i];
            j++;
       }
       else
       {
           c[k]=a[i];
           k++;
       }
   }
       printf("the even elements are:");
       for(i=0;i<j;i++)
       {
           printf("%d\t",b[i]);
       }
       printf("the odd elements are:");
       for(i=0;i<k;i++)
       {
           printf("%d\t",c[i]);
   }
}
