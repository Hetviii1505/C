// Input two intgers a and b : a>b, and find the remainder when a is divided by b

#include<stdio.h>

int main()
{
    int a, b, r;
   
    printf("Condition : a has to be greater than b \n"); // a>b
    printf("Enter the vakue of a : ");  // Dividend
    scanf(" %d",&a); 
    printf("\nEnter the vakue of b : "); // Divisor
    scanf(" %d",&b);
    
    int q = a/b;
   
    r = a - (b*q); //divisor*quotient +remainder = dividend

    printf("\n%d is the remainder obtained when %d is divided by %d",r,a,b); // instead of takeing third variable r it v=can be directly replaced by a%b to find the remainder when a is divided by b.....


    return 0;

}