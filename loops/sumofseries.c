// Print the sum of the series 1-2+3-4+5-6..... upto n terms
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int sum = 0 ;
    if (n%2==0)
    {
        sum = -n/2 ;
    }
    else
    {
        sum = -n/2 + n ;
    }
    
    printf("Sum of digits : %d",sum);
    
    return 0 ;
}