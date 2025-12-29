// Take an input from user and print its table

#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);
    printf("The table of %d \n",x);
   
    for (int i = x; i <= x*10; i=i+x)
    {
        printf("%d ",i);
    }

    return 0;
}