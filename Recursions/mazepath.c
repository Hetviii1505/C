#include<stdio.h>
int maze(int sr, int sc, int er, int ec)  
{
    int rigthways = 0;
    int downways = 0;
    if(sr == er && sc == ec) return 1;
    if (sr == er) // only rightward ways possible 
    {
        rigthways += maze(sr,sc+1,er,ec) ; 
    }
    if (sc == ec) // only downward ways possible 
    {
        downways = maze(sr+1,sc,er,ec) ; 
    }
    if (sr<er && sc<ec)
    {
        rigthways += maze(sr,sc+1,er,ec) ;
        downways = maze(sr+1,sc,er,ec) ; 
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
    
    int no_of_ways = maze(1,1,n,m);

    printf("%d",no_of_ways);
    return 0;
}