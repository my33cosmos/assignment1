#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter the number of rows :");
    scanf("%d", &m);
    printf("Enter the number of coumns :");
    scanf("%d", &n);
    int arr[m][n],trans[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("Enter the arr[%d][%d] element :",i+1,j+1);
            scanf("%d", &arr[i][j]);
            
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            trans[i][j]=arr[j][i];
            
        }
    }
    printf("Transpose matrix :\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            printf("%d ",trans[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}
