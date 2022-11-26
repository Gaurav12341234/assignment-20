//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void reverse(int*,int);
int main()
{
    int a[9],i;
    printf("enter an array:");
    for(i=0;i<9;i++)
        scanf("%d",&a[i]);
    printf("Elements of an array in reverse order:");
    reverse(a,9);
    return 0;
}
void reverse(int *p,int size)
{
    int i,temp;
    for(i=0;i<size/2;i++)
    {
        temp=*(p+i);
        *(p+i)=*(p+size-i-1);
        *(p+size-i-1)=temp;
    }
    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
}