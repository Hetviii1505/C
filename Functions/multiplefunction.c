#include<stdio.h>
void england()
{
    printf("You are in England \n");
    
    return ;
}
void USA()
{
    printf("You are in America \n");
    england();
    return ;
}
void India()
{
    printf("You are in India \n");
    USA();
    return ;
}
int main()
{
    India();
    return 0;
}


