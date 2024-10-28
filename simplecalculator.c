#include <stdio.h>
void main()
{
    int a,b;
    char op;
    printf("Enter a,b values and operator");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case'+':printf("The Addition is %d",a+b);
        break;
        case'-':printf("The subtraction is %d",a-b);
        break;
        case'*':printf("The Multiplication is %d",a*b);
        break;
        case'/':printf("The division is %d",a/b);
        break;
        case'%':printf("The remainder is %d",a%b);
        break;
        default:printf("Invalid output");
        break;
    }
}
