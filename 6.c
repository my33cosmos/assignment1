#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the number of rows :");
    scanf("%d", &m);
    printf("Enter the number of coumns :");
    scanf("%d", &n);
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("Enter the arr[%d][%d] element :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    printf("Largest number :%d", max);
    return 0;
}
