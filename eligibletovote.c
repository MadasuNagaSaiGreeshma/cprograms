#include <stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you can vote:");
    }
    else
    {
        printf("you cant vote:");
    }
}
