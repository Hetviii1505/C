// WAP to print all the odd number using continue statement 

#include<stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i%2==0) // even number 
        {
            continue; // skips the mentioned iterration
        }

        printf("%d ",i);
        
    }
    
    return 0;
}