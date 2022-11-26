//5. Write a program to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int max(int*,int*);
int main()
{
    int a,b,s;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("maximum number is:");
    s=max(&a,&b);
    printf("%d",s);
    return 0;
}
int max(int *p,int *q)
{
    if(*p>=*q)
        return *p;
    else 
        return *q;
}