// write a program to find volume of a sphere if radius is given

#include<stdio.h>

int main()
{
    int r = 5;
    float v;

    v = (4*3.14*r*r*r)/3;

    printf("The volume of a sphere : %f",v);


    return 0;
}