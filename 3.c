#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter the number of rows :");
    scanf("%d", &m);
    printf("Enter the number of coumns :");
    scanf("%d", &n);
    int arr[m][n], flag = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("Enter the arr[%d][%d] element :",i+1,j+1);
            scanf("%d", &arr[i][j]);

            if (i > j && arr[i][j] != 0)
            
                flag = 0;
            
        }
    }
    if(flag==1)
    printf("It is an Upper triangular matrix");
    else
    printf("It is not an Upper triangular matrix");
    return 0;
}
