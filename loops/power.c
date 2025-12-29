// Two numbers are entered through the keyboar. WAP to find the value of one number raised to the power of another
#include<stdio.h>
int main()
{
    int a,b ;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter exponent/power : ");
    scanf("%d",&b);

    int power = 1;
    for (int i = 1; i <=b ; i++)
    {
        power = power*a;
    }
    
    printf("%d raised to the power of %d is %d ",a,b,power);

    return 0;
}