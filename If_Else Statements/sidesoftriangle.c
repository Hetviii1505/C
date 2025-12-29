// Take three numbers input and tell it they can be the sides of triangle 

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 1st numbber : ");
    scanf("%d",&a);
    printf("Enter 2nd numbber : ");
    scanf("%d",&b);
    printf("Enter 3rd numbber : ");
    scanf("%d",&c);   
    
    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("The entered three numbers makes a valid triangle");
    }
    else
    {
        printf("Invalid input");
    }
    

    return 0;
} 