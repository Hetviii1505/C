// WAP to print sum of all the evn digits of a entered number
#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    
    int sum = 0;
    int lastDigit;

    while (n!=0)
    {
        lastDigit = n % 10;
        if (n%2==0)
        {
           sum = sum + lastDigit;     
        }   
         n = n/10;         
    }
    
    printf("Sum of digits : %d",sum);

    return 0 ;
}