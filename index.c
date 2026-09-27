#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum;

    printf("enter your first number: \n");
    scanf("%d",&a);

    printf("enter your second number: \n");
    scanf("%d",&b);
    sum=a*b;
    printf("your multiplication of two numbers are: %d\n ",sum);

    return 0;
}