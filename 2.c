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
    printf("Palindrome numbers:-\n");

    for (int i = 0; i < N; i++)
    {
        int t = arr[i];
        int rev = 0;
        int num = t;
        while (t > 0)
        {
            rev = rev * 10 + t % 10;
            t = t / 10;
        }
        if (rev == num)
            printf("%d ", num);
    }
    return 0;
}