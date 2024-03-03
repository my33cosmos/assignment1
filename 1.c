#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value of of N :");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the array elements :");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j = N - 1; i < N / 2; j--, i++)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    printf("Reversed array :");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}