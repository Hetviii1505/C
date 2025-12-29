// Find the maximum value out of all the elements in the array 

#include<stdio.h>

int main()
{
    
    int ar[5];
    printf("Enter five elements \n");
    for (int i = 0; i <=4; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("The entered elements are : \n");
    for (int i = 0; i <=4; i++)
    {
        printf("%d ",ar[i]);
    }
    int max = ar[0];
    for (int i = 1; i <= 5; i++)
    {
    if(max<ar[i])
    {
        max = ar[i];
    }
    }
   
    printf("\nMaximum value is %d",max);

    return 0;
    
}








