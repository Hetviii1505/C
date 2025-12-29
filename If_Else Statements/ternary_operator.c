// Write a program to find whether the entered number is even or odd using ternary operator 

#include<stdio.h>
int main()
{
    int a ;
    printf("Enter any number : ");
    scanf("%d",&a);

    a%2==0 ? printf("Even") : printf("Odd");

    return 0;
}