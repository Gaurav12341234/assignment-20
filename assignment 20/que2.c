//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char*,char*,int);
int main()
{
    char str1[10],str2[10];
    printf("Enter 2 strings:\n");
    fgets(str1,10,stdin);
    fgets(str2,10,stdin);
    printf("swap strings:\n");
    swap(str1,str2,10);
    printf("str1=%s str2=%s",str1,str2);
    return 0;
}
void swap(char *p,char *q,int n)
{
    char *temp;
    temp=(char*)malloc(n*sizeof(char));
    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);
    free(temp);
    temp=NULL;
}