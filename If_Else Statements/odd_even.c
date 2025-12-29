// Write a program to find wheather the entered number is odd or even

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    if (a%2==0) /* condition */
    {
        printf("%d is a even number",a); /* code */
    }
    else
    {
        printf("%d is not a even number",a);
    }


    return 0;
}