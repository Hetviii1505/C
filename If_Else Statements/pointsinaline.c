// Write a program to check if all the three points fall on one straight line

#include<stdio.h>

int main()
{
    double x1, x2, x3, y1, y2, y3 ;
    double m1, m2;

    printf("Enter point 1 : \n");
    scanf("%d %d",&x1,&y1);
    printf("Enter point 2 : \n");
    scanf("%d %d",&x2,&y2);
    printf("Enter point 3 : \n");
    scanf("%d %d",&x3,&y3);

    m1 = (y2-y1)/(x2-x1);
    m1 = (y3-y2)/(x3-x2);

    if (m1==m2)
    {
        printf("All the three points (%d,%d), (%d,%d), (%d,%d) fall on one straight line",x1,y1,x2,y2,x3,y3);
    }
    else
    {
        printf(" all the three points does not fall on one straight line");
    }


    return 0;
}