// Given a point (x,y), write a program to find out if it lies on x-axis, y-axis, or at the oringin viz. (0,0)

#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter point's coordinates :\n");
    scanf("%d %d",&x,&y);
    
    if(x==0 && y==0)
    {
        printf("The point is origin");
    }
    else if (y==0 && x!=0)
    {
        printf("The point (%d,%d) lies on x-axis",x,y);
    }
    else if(x==0 && y!=0)
    {
        printf("The point (%d,%d) lies on y-axis",x,y);   
    }
    else
    {
        printf("The point is neither on x-axis nor on y-axis");
    }
    return 0;
}