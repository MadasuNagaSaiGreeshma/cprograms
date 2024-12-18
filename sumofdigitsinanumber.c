#include <stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        rem =n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum is %d",sum);
}
