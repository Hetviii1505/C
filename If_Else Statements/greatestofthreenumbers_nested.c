// Take 3 positive input and print the greatest of them using nested if else

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any number : ");
    scanf("%d",&a);
    printf("Enter any number : ");
    scanf("%d",&b);
    printf("Enter any number : ");
    scanf("%d",&c);
   
    if(a>b)
    {
        if(a>c)
         printf("%d is the greatest",a);
        else
         printf("%d is the greatest",c);
    }
    else
    {
        if(b>c)
         printf("%d is the greatest",b);
        else
        printf("%d is the greatest",c);
    }

    
    return 0;
}
