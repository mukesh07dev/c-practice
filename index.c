#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum;
    int subtraction;
    int product;
    int quatient;
    int remainder;


    printf("enter your first number: \n");
    scanf("%d",&a);

    printf("enter your second number: \n");
    scanf("%d",&b);
    sum=a+b;
    printf("your sum of two numbers are: %d\n ",sum);
    subtraction =a-b;
    product = a*b;
    quatient = a/b;
    remainder = a%b;
    printf("The subtraction of the two numbers : %d\n", subtraction);
    printf("The product of the two numbers : %d\n", product);
    printf("The quatient of the two numbers : %d\n", quatient);
    printf("The remainder of the two numbers : %d\n", remainder);


return 0;
}