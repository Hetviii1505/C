#include<stdio.h>
int main()
{
    int ar[5] = {1,2,3,4,5};

    printf("%p ",&ar[0]);
    printf("%p ",&ar[1]);
    printf("%p ",&ar[2]);
    printf("%p ",&ar[3]);
    printf("%p ",&ar[4]);

    return 0;
}