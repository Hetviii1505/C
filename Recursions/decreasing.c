// Print numbers 'n' to 1
#include<stdio.h>
void nto1(int n)
{
    if ( n == 0)                  // for (int i = 1; i <= n; i++)
    return ;
    printf("%d \n",n);
    nto1(n-1);
    return ;
}
int main()
{
int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    nto1(n);

    return 0;
}
