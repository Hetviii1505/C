// WAP to print factorial of given number 'n'

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int fact = 0 ;
  
  for (int i = 1; i <= n; i++)
  {
    fact = fact+i;
  }
  
    printf("%d! = %d",n,fact);
    
    return 0 ;
}

