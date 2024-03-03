#include <stdio.h>

void iomatrix(int matrix[][100], char flag, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (flag == 'i')
            {
                printf("Enter the matrix[%d][%d] element :", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
            }
            if (flag == 'o')
            {
                printf("%d ", matrix[i][j]);
            }
        }
        if (flag == 'o')
        {
            printf("\n");
        }
    }
}
void arithmatix(int matrix1[][100], int matrix2[][100], int result[][100], char flag, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (flag == '+')
                result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
int main()
{
    int m1, m2, n1, n2;
    printf("Enter the number of rows for matrix 1 :");
    scanf("%d", &m1);
    printf("Enter the number of columns for matrix 1:");
    scanf("%d", &n1);
    printf("Enter the number of rows for matrix 2 :");
    scanf("%d", &m2);
    printf("Enter the number of columns for matrix 2:");
    scanf("%d", &n2);

    int matrix1[m1][n1], matrix2[m2][n2], result[m1][n1];

    printf("Matrix 1\n");
    iomatrix(matrix1, 'i', m1, n1);
    printf("Matrix 2\n");
    iomatrix(matrix2, 'i', m2, n2);

    if (m1 == m2 && n1 == n2)
    {
        int result[m1][n1];
        arithmatix(matrix1, matrix2, result, '+', m1, n1);
        printf("\nAdditon Matrix:\n");
        iomatrix(result, 'o', m1, n1);
    }
    else
        printf("Addtion not possible :");

    return 0;
}
