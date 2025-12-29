// Take input percentage of a student and grade according to marks 

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter obtained marks : ");
    scanf("%d",&marks);
    if (marks<100 && marks>90)
    {
        printf("Excellent :)");
    }
    else if (marks<=90 && marks>80)
    {
       printf("Very Good !!!");
    }
    else if (marks<=80 && marks>70)
    {
       printf("Good !!!");
    }
    else if (marks<=70 && marks>60)
    {
       printf("Can do better !");
    }
    else if (marks<=60 && marks>50)
    {
       printf("Average :|");
    }
    else if (marks<=50 && marks>40)
    {
       printf("Below Average");
    }
    else if (marks<=40 && marks>0)
    {
       printf("FAIL :(");
    }
    else
    {
        printf("Invalid input");
        printf("\nEntered marks should be between 0 to 100");
    }
    

    
    return 0;
}
