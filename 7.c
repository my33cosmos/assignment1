#include <stdio.h>

int main()
{
    int m, n,i;
    printf("Enter the size of the square matrix :");
    scanf("%d", &n);
    
    int arr[n][n];
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("Enter the arr[%d][%d] element :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nPrincipal diagonal elements:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i][i]);
    }

    printf("\nReverse diagonal elements:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i][n - 1 - i]);
    }

   
    return 0;
}
