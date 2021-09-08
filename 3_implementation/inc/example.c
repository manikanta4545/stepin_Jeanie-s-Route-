#include<stdio.h>

int sum(int x,int y); // declaration

int main()
{
    int a=30;
    int b=40;
    int c = sum(a,b);
    printf("%d",c);
}
int sum(int x,int y)
{
    return(x+y);
}