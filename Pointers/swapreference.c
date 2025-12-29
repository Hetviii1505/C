#include<stdio.h>

void swap(int *x, int *y)
{
    int c;
    c = *x;
    *x = *y;
    *y = c;
    
    return ;
}
int main()
{
    int a, b;
    printf("Enter a number a : ");
    scanf("%d",&a);
    printf("Enter another number b : ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("After swapping \n");
    printf("The value of a = %d\n", a);
    printf("The value of b = %d", b);


   return 0;
}
