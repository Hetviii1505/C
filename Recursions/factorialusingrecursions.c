// Make a function which calculates factorial of 'n' using recursions

#include<stdio.h>
int factorial(int a)
{
    if (a == 1 || a == 0) 
        return 1;
        return a*factorial(a-1);
}



int main()
{
    int a ;
    printf("Enter any number : ");
    scanf("%d",&a);

    int fact = factorial(a);

    printf("%d! = %d",a,fact);


    return 0 ;
}