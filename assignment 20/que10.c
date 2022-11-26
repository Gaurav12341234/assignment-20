//10. Write a program to print a string in reverse using a pointer.
#include<stdio.h>
void reverse(char*,int);
int main()
{
    char str[20];
    int i;
    printf("Enter a string:");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf("print a string in reverse order:");
    reverse(str,i-1);
    return 0;
}
void reverse(char *p,int l)
{
    char temp;
    int i;
    for(i=0;i<l/2;i++)
    {
        temp=p[i];
        p[i]=p[l-i-1];
        p[l-i-1]=temp;
    }
    printf("%s",p);
}