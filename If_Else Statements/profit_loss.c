// If cost price and selling price is input through the keboard, write a program to determine whether the seller has made profit or incurred loss. 
// Also determine much profit he made or loss he incurred

#include<stdio.h>
int main()
{
    int cp,sp,x ;

    printf("Enter the cost price : ");
    scanf("%d",&cp);
    printf("Enter the selling price : ");
    scanf("%d",&sp);
    
    x = sp - cp ;
    if (x<0)
    {
        x = x*(-1) ;
        printf("The Seller has incurred loss :( of %d",x);
    }
    else
    {
        printf("The seller has made profit :) of %d",x);
        if (sp==cp)
        {
            printf("\nThat is no profit, no loss :)");
        }
        
    }
    
    return 0;
}