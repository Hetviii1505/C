#include<stdio.h>
int main()
{
    int a = 25;
    int *x = &a;
    int **y = &x; // double pointer 
    int ***z = &y; // double pointer 

    printf("%d \n",a);
    printf("%d \n",*x); 
    printf("%d \n",**y);
    printf("%d \n",***z); 
    printf("%p \n",&a); 
    printf("%p \n",*y);
    printf("%p \n",**y);
    printf("%p \n",*x); 

    return 0;
 
}