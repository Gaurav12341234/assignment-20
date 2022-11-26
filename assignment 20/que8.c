//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int sum(int*,int);
int main()
{
    int a[10],i,l;
    printf("Enter an array:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    l=sum(a,10);
    printf("sum of all elements in an array is %d",l);
    return 0;
}
int sum(int *p,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
        sum=sum+*(p+i);
    return sum;
}