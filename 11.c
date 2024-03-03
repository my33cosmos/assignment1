#include<stdio.h>
#include<string.h>

int main()
{
    char ch,s[100];
    printf("Enter the string :");
    fgets(s,sizeof(s),stdin);
   

    int l;
    for(l =0;s[l]!='\n';l++);
    for (int i = 0,j=l-1; i < l/2;j--, i++)
    {
        int t =s[i];
        s[i]=s[j];
        s[j]=t;
    }
   printf("New string :");
   puts(s);
    return 0;
}