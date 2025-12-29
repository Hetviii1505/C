// Calculate the product of all the elements in the given array 

#include<stdio.h>
int main ()
{
    int ar[5] = {1,2,3,4,5};
    int mul = 1;
    for (int i = 0; i <= 4; i++)
    {
        mul = mul*ar[i];
    }
    printf("The product of all the elements of the given array is %d",mul);

    return 0;
}