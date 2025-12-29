// WAP to compute the greatest common divisor of two gin=ven number using functions 
#include<stdio.h>

int  min(int a,int b)
{
    if(a<b)
       return a;
    else
       return b;   
}
int GCD(int a, int b)
{
    int HCF;

    for (int i = min(a,b); i >= 1; i--)   //  for (int i = 1; i <= min(a,b); i++)
    {
        
        if ( a % i == 0 && b % i == 0)
        {
           HCF = i; 
           break;   
        }                      
    }
     
    return HCF; 
}
int main()
{
    int a ;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    int b ;
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    int HCF = GCD(a,b);

    printf("The highest common factor of %d and %d = %d",a,b,HCF);

    return 0;
}