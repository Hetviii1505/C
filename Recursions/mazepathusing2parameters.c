#include<stdio.h>
int maze(int n, int m)  
{
    int rigthways = 0;
    int downways = 0;

    if (n == 1 && m == 1) return 1;

    if (n == 1) // can not go down
    {
        rigthways += maze(n,m-1) ;
    }

    if (m == 1) // can not go right 
    {
        downways += maze(n-1,m);
    }
    
    if (n>1 && m>1)
    {
        rigthways += maze(n,m-1) ;
        downways += maze(n-1,m) ;
    }   

    int totalways = rigthways + downways ;
    return totalways;
}

int main()
{
    int n ;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m ;
    printf("Enter number of column : ");
    scanf("%d",&m);
    
    int no_of_ways = maze(n,m);

    printf("%d",no_of_ways);
    return 0;
}