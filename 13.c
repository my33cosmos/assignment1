#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
       for (int j = i; j < n; j++)
       {
            if(arr[i]<arr[j])
            {
                int t =arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
       }
       
    }
    printf("After arranging :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}