// WAP to check if a number is prime or not 

#include<stdio.h>

int main()
{
    int x ;
    int a = 0 ;
    printf("enter any number : ");
    scanf("%d",&x);

    for (int i = 2; i <= x-1; i++)
    {
        if (x%i==0)
        {
           a =1 ;
           break ;
        }
        
    }
    
    if (x==1)
    {
       printf("1 is neither prime nor composite");
    }
    
    else if (a==0)
    {
       printf("The enterded number is prime");
    }

    else
    {
        printf("The entered number is composite");
    }
    



    return 0;
}