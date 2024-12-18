#include <stdio.h>
void main()
{
    int n,rem,rev=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        rem =n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The rev is %d",rev);
}
