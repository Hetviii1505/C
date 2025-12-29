// Take positive integer input and tell it is divisible by five or three

#include <stdio.h>
int main()
{
    int x;
    printf("Enter any positive integer : ");
    scanf("%d", &x);

    if (x % 5 == 0 || x % 3 == 0)
    {
        printf("%d is divisible by five or three\n", x);

        if (x % 5 == 0)
        {
            printf("%d is divisible by five", x);
        }

        else
        {
            printf("%d is divisible by three", x);
        }
    }
    else
    {
        printf("%d is not divisible by five or three", x);
    }
    return 0;
}