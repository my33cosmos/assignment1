#include<stdio.h>

int main()
{
    char s[100];
    printf("Enter the string :");
    fgets(s,sizeof(s),stdin);
    int i;
    for(i =0;s[i]!='\n';i++);
    printf("Length of the string :%d",i);
}