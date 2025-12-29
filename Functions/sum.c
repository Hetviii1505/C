// WAP to add two numbers entered by user using functions 
#include<stdio.h>
int add(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b;
    printf("Enter any number : ");
    scanf("%d",&a);
    printf("Enter any number : ");
    scanf("%d",&b);

    int sum = add(a,b);

    printf("Sum = %d",sum);

    return 0;
}