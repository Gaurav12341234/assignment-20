//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int*,int);
int main()
{
    int a[10],i;
    printf("Enter an array:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("Sort an array:");
    sort(a,10);
    return 0;
}
void sort(int *p,int size)
{   
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
        if(*(p+i)>*(p+j))
        {
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }
        }
    }
    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
}