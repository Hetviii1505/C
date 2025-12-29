// Write a program to print the absolute vallue of the entered integer 

#include<stdio.h>

int main()
{
    int x;
    printf("Enter an integer : ");
    scanf("%d",&x);
    
    if (x<0) // if x is negative
    {
        x = x*(-1);
    }
    
    printf("\nThe absolute value of the entered integer : %d",x);
    return 0;
}
