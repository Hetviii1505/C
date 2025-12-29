// Meke a function that calculates 'a' raised to the power 'b' using recursions
#include<stdio.h>
int power(int a, int b)
{
    if (b == 0)
       return 1;
    return a*power(a,b-1);
}
int main()
{
    int a, b;
    printf("Enter any number : ");
    scanf("%d",&a);
    printf("Enter any number : ");
    scanf("%d",&b);

    int p = power(a,b);
    printf("%d raised to the power %d = %d ",a,b,p);

    return 0 ;
}