//7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
void fun(char *);
int main()
{
    char str[50];
    printf("Enter an string:");
    fgets(str,50,stdin);
    fun(str);
    return 0;
}
void fun(char *p)
{
    int i,count1=0,count2=0;
    for(i=0;p[i];i++)
    {
        if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u')
            count1++;
        else if(p[i]!=' ')
            count2++;
    }
    printf("Number of vowels is %d",count1);
    printf("\nnumber of consonent is %d",count2-1);
}