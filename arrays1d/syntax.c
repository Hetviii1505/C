#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    // updating elements
    arr[4]=100; //{1,2,3,4,100}
    arr[1]=10; //{1,10,3,4,5}
    printf("%d \n",arr[4]);
    int a[5] = {1,2,3,4,5} ;
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ",a[i]);
    }
    

}