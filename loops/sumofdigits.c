// WAP to print the sum of digits of the entered number 
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
        sum = sum + lastDigit;     
        n = n/10;         
    }
    
    printf("Sum of digits : %d",sum);

    return 0 ;
}