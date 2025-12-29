// Given the length and breadth of rectangle write a program ot find whether the area of the rectangle is greater than its perimeter 

#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("Enter the lenght of the rectangle : ");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&b);
    
    a = l*b;
    p = 2*(l+b);
    
    if (a>p)
    {
        printf("The area of the rectangle is greater than its perimeter");
       
    }
    else
    {
        printf("The area of the rectangle is not greater than its perimeter");
    }

    return 0;
}