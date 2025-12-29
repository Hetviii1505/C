#include<stdio.h>

void greeting(int n)
{
    if ( n == 0)                  // for (int i = 1; i <= n; i++)
    return ;
    printf("Good Morning !!! \n");
    greeting(n-1);
    return ;
}

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    greeting(n);

    return 0;
}