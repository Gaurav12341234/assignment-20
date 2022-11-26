//6. Write a program to calculate the length of the string using a pointer.
#include<stdio.h>
int main()
{
    char str[20],*p;
    int l;
    p=str;
    printf("Enter an string:");
    fgets(str,20,stdin);
    for(l=0;p[l];l++);
    printf("Length of string is %d",l-1);
    return 0;
}