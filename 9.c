#include<stdio.h>

int main()
{
    char s[100];
    printf("Enter the string :");
    fgets(s,sizeof(s),stdin);
    int l,alpha =0,digits=0,special=0;
    for(l =0;s[l]!='\n';l++);
    for (int i = 0; i < l; i++)
    {
         if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
    alpha++;
    else if(s[i]>=48 && s[i]<=57)
    digits++;
    else
    special++;
    }
    printf("No.of letters :%d\nNo.of numbers :%d\nNo.of special characters :%d",alpha,digits,special);
    return 0;
}