// Take float input and print the fractional part of the real number 

#include<stdio.h>

int main ()

{
   float a;

    printf("Enter the vakue of a : ");  
    scanf("%f",&a); 

   int b;
    b = a;

   float z = a-b ;
    printf("The fractional part of the entered numbedr is : %f",z);

    return 0;
}