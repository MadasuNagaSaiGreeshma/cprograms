#include <stdio.h>
void main()
{
    int n,rem,sum=0,temp;
    printf("Enter the value of n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem =n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is armstrong:");
    }
    else
    {
     printf("%d is not an armstrong:");
    }
}
