// Display this GP : 100 50 25....
#include<stdio.h>

int main()
{
    int n ;
    printf("Enter any number upto which you want to display the given GP : ");
    scanf("%d",&n);
    
    float a = 100 ;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",a);
        a = a*(1/2);
    }

    return 0;
}