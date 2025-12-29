#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    // 4, 7, 10, 13, 16, 19,.....
    // Taking extra variable 
    int a = 4 ;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",a);
        a = a + 3;
    }
    

    return 0;
}