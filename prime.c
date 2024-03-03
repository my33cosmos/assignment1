#include<stdio.h>

int main(){
    int N;
    printf("Enter the value of of N :");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the array elements :");
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Palindrome numbers:-\n");

    for (int i = 0; i < N;i++)
    {
        int t=arr[i];
        int flag =1;
        for (int i = 2; i < t; i++)
        {
            if(t<2)
            flag =0;
            if(t%i==0)
            flag=0;
        }
        if(flag==1)
        printf("%d ",t);
        
    }
    return 0;
    
}