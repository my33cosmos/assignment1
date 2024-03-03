#include<stdio.h>
#include<string.h>

int main()
{
    char ch,s[100];
    printf("Enter the string :");
    fgets(s,sizeof(s),stdin);
    printf("Enter the particular character :");
    scanf(" %c",&ch);

    int l;
    for(l =0;s[l]!='\n';l++);
    for (int i = 0; i < l; i++)
    {
        if(s[i]==ch)
        s[i]='$';
    }
   printf("New string :");
   puts(s);
    return 0;
}