// Print numbers 1 to 'n' (after recursive call)
#include<stdio.h>
void increasing(int n)
{
    if ( n == 0)              // Base case  
    return ;
    increasing(n-1);          // Call
    printf("%d ",n);        // Code
    return ;
}
int main()
{
int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    increasing(n);

    return 0;
}
