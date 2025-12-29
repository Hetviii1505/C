// Calculate the sum of all the elements in the given array 

#include<stdio.h>
int main ()
{
    int ar[5] = {1,2,3,4,5};
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + ar[i];
    }
    printf("The sum of all the elements of the given array is %d",sum);

    return 0;
}